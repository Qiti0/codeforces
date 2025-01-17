#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const ll inf = 2e10;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef pair<int,int> pii;
typedef pair<ll,int> pli;
inline int lowbit(int x) {return x & (- x);}

struct edge{
    ll to,w,d;
};
vector <edge> g[N];

ll dis[N];
bool vis[N];
priority_queue <pli> q;

int n,m,k;

ll dijstra(int x,int y){
    dis[x] = 0;
    q.push({0,x});
    while(q.size()){
        ll distance = q.top().first;
        int u = q.top().second;
        if(u == y) return dis[u];
        q.pop();
        if(vis[u]) continue;
        vis[u] = 1;
        for(int i = 0;i < g[u].size();i ++){
            int ne = g[u][i].to;
            ll w = g[u][i].w;
            int d = g[u][i].d;
            if(d == 0 && x != k) continue;
            if(dis[u] + w < dis[ne]){
                dis[ne] = dis[u] + w;
                q.push({dis[ne],ne});
            }
        }
    }
}
void solve()
{
    cin >> n >> m >> k;
    for(int i = 0;i < m;i ++){
        int u,v,w,d;cin >> u >> v >> w >> d;
        g[u].push_back({v,w,d});
        g[v].push_back({u,w,d});
    }
    memset(dis,0x3f,sizeof(dis));
    ll dis0 = dijstra(1,n);
    memset(dis,0x3f,sizeof(dis));
    memset(vis,0,sizeof(vis));
    ll dis1 = dijstra(1,k);
    ll dis2 = dijstra(k,n);
    cout << dis0 << " " << dis1 + dis2 << '\n';
    for(int i = 0;i < n;i ++){
        cout << dis[i];
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
