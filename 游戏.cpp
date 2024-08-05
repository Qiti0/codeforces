#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const ll inf = 1e13 + 1;
const int mod = 1e9 + 7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef pair<int,int> pii;
typedef pair<ll,int> pli;
inline int lowbit(int x) {return x & (- x);}

struct edge{
    ll to,w,d;
};
vector <edge> g[N];

ll dis[N];// 起点到当前节点的距离
bool vis[N];

int n,m,k;

ll dijstra(int x,int y){
    priority_queue <pli,vector<pli>,greater <pli>> q;
    dis[x] = 0;
    q.push({0,x});
    while(q.size()){
        ll dist = q.top().first;
        int u = q.top().second;

        q.pop();
        if(vis[u]) continue;
        vis[u] = 1;
        for(int i = 0;i < g[u].size();i ++){
            int ne = g[u][i].to;
            ll w = g[u][i].w;
            int d = g[u][i].d;
            if(d == 0 && x != k) continue;
            // cout << dist << " " << dis[u] << "\n";
            if(dist + w < dis[ne]){
                dis[ne] = dist + w;
                q.push({dis[ne],ne});
            }
        }
    }
    return dis[y];
}
void solve()
{
    cin >> n >> m >> k;
    for(int i = 0;i < m;i ++){
        int u,v,w,d;cin >> u >> v >> w >> d;
        g[u].push_back({v,w,d});
        g[v].push_back({u,w,d});
    }
    memset(dis,inf,sizeof(dis));
    ll dis0 = dijstra(1,n);
    memset(dis,inf,sizeof(dis));
    memset(vis,0,sizeof(vis));
    
    ll dis1 = dijstra(1,k);
    memset(dis,inf,sizeof(dis));
    memset(vis,0,sizeof(vis));
    ll dis2 = dijstra(k,n);
    // cout << dis0 << " " << dis1 << " " << dis2 << "\n";
    if(dis0 >= inf && (dis1 >= inf || dis2 >= inf)){
        cout << -1 << "\n";
    }else{
        if(dis0 >= inf){
            cout << dis1 + dis2 << "\n";
        }else if(dis1 >= inf || dis2 >= inf){
            cout << dis0 << "\n";
        }else{
            cout << min(dis0,dis1 + dis2) << "\n";
        }
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
