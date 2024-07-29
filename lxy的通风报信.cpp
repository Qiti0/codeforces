#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 1010;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

map <pii,int> mp;
int m,n;

int dx[] = {0,1,0,-1};
int dy[] = {1,0,-1,0};

int vis[N][N];
int fa[N * N];
struct ind{
    int x,y,dis;
};

struct edge{
    int from,to,w;
    bool operator < (const edge &p) const {
        return w < p.w;
    }
};
vector <edge> e;
void add(int from,int to,int step){
    e.push_back({from,to,step});
}

int find(int x){
    if(x == fa[x]) return x;
    return fa[x] = find(fa[x]);
}
void merge(int x,int y){
    int a = find(x);
    int b = find(y);
    if(a != b) fa[b] = a;
}
void clear_vis(){
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < m;j ++){
            vis[i][j] = 0;
        }
    }
}
void bfs(vector <vector <char> >g,int x0,int y0){
    clear_vis();
    queue <ind> q;
    q.push({x0,y0,0});
    vis[x0][y0] = 1;
    while(q.size()){
        int x = q.front().x;
        int y = q.front().y;
        int dis = q.front().dis;
        q.pop();
        for(int i = 0;i < 4;i ++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            int step = dis + 1;
            if(nx < 0 || nx >= n || ny < 0 || ny >= m || vis[nx][ny] || g[nx][ny] == '#') continue;
            vis[nx][ny] = 1;
            if(g[nx][ny] == '*'){
                // cout  << x << " " << y << " "<< mp[{x,y}] << "\n";
                add(mp[{x0,y0}],mp[{nx,ny}],step);
            }
            q.push({nx,ny,step});
        }
    }
}

void solve()
{
    cin >> n >> m;
    vector <vector <char> > g(n,vector <char> (m));
    vector <pii> ve;
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < m;j ++){
            cin >> g[i][j];
            if(g[i][j] == '*') {
                mp[{i,j}] = mp.size() + 1;
                // cout <<i <<" " << j << " "<< mp[{i,j}]<< "\n";
                // ve.push_back({i,j});
            }
        }
    }
    for(int i = 1;i <= mp.size();i ++){
        fa[i] = i;
    } 

    for(auto it : mp){
        bfs(g,it.first.first,it.first.second);
    }

    sort(e.begin(),e.end());

    int cnt = 0,ans = 0;
    for(auto &it : e){
        // if(cnt >= mp.size() - 1) break;
        if(find(it.from) != find(it.to)){
            merge(it.from,it.to);
            cnt ++;
            ans += it.w;
        }
        // cout << it.from << " " << it.to << " " << it.w << "\n";
    }
    // cout << cnt << " " << mp.size() << " " << ans << "\n";
    if(cnt < mp.size() - 1) cout << "No\n";
    else cout << ans << "\n";
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
