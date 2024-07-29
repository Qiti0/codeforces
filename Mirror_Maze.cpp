#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 1005;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

struct edge{
    int x,y,k,flag;
}e[4000005];

int n,m;
int idx;
int n1[] = {1,0,2,3};
int n2[] = {0,1,3,2};
int n3[] = {3,2,1,0};
int n4[] = {2,3,0,1};

int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};

char g[N][N];
int vis[N][N];
int in_st[N][N][5];
int in[N][N][5];
int dfn[N][N][5];
map <pii,int> mp;

void dfs_line(int x,int y,int k){
    int flag = 1;
    if(x < 1 || x > n || y < 1 || y > m) return;
    int nx = x,ny = y,nk = k;
    if(g[x][y] == '-' && k >= 2) flag = 0;
    if(g[x][y] == '|' && k <= 1) flag = 0;

    if(g[x][y] == '-') nk = n1[k],nx += dx[nk],ny += dy[nk];
    if(g[x][y] == '|') nk = n2[k],nx += dx[nk],ny += dy[nk];
    if(g[x][y] == '/') nk = n3[k],nx += dx[nk],ny += dy[nk];
    if(g[x][y] == '\\') nk = n4[k],nx += dx[nk],ny += dy[nk];
    e[++idx] = {x,y,k,flag};
    dfs_line(nx,ny,nk);
}

void get_in(){
    int cnt = 0;
    for(int i = idx;i >= 1;i --){
        int x = e[i].x;
        int y = e[i].y;
        int flag = e[i].flag;
        int k = e[i].k;

        if(!mp[{x,y}] && flag){
            cnt ++;
            mp[{x,y}] ++;
        }
        in[x][y][k] = cnt;
        in_st[x][y][k] = 1;
    }
}

int dfs_loop(int x,int y,int k){
    int flag = 1;
    if(vis[x][y] ||( g[x][y] == '-' && k >= 2) || (g[x][y] == '|' && k <= 1)) flag = 0;
    if(flag) vis[x][y] = 1;
    int nx = x,ny = y,nk = k;

    if(g[x][y] == '-') nk = n1[k],nx += dx[nk],ny += dy[nk];
    if(g[x][y] == '|') nk = n2[k],nx += dx[nk],ny += dy[nk];
    if(g[x][y] == '/') nk = n3[k],nx += dx[nk],ny += dy[nk];
    if(g[x][y] == '\\') nk = n4[k],nx += dx[nk],ny += dy[nk];

    int n0 = dfn[x][y][k],n1 = dfn[nx][ny][nk];
    if(n1 && n1 <= n0){
        in[x][y][k] = n0 + flag - 1;
    }else{
        dfn[nx][ny][nk] = dfn[x][y][k] + flag;
        in[x][y][k] = dfs_loop(nx,ny,nk);
    }
    vis[x][y] = 0;
    in_st[x][y][k] = 1;
    return in[x][y][k];
}
void solve()
{
    cin >> n >> m;
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= m;j ++){
            cin >> g[i][j];
        }
    }

    for(int i = 1;i <= n;i ++){
        idx = 0;
        mp.clear();
        dfs_line(i,1,3);
        get_in();
        idx = 0;
        mp.clear();
        dfs_line(i,m,2);
        get_in();
    }

    for(int i = 1;i <= m;i ++){
        idx = 0;
        mp.clear();
        dfs_line(n,i,0);
        get_in();
        idx = 0;
        mp.clear();
        dfs_line(1,i,1);
        get_in();
    }

    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= m;j ++){
            for(int k = 0;k < 4;k ++){
                if(in_st[i][j][k]) continue;
                dfn[i][j][k] = 1;
                dfs_loop(i,j,k);
            }
        }
    }
    int q;cin >> q;
    while(q --){
        int x,y;string s;
        cin >> x >> y >> s;
        int k = 0;
        if(s == "below") k = 1;
        else if(s == "left") k = 2;
        else if(s == "right") k = 3;
        cout << in[x + dx[k]][y + dy[k]][k] << "\n";
    }
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
