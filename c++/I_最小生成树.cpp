#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
struct edge
{
    int to,w;
    edge(int tto,int ww)
    {
        to=tto;
        w=ww;
    }
};
struct node
{
    int id,dis;
    node(int iid,int ddis)
    {
        id=iid;
        dis=ddis;
    }
    bool operator <(const node x) const{
        return dis>x.dis;
    }
};
vector<edge> g[N];
priority_queue<node,vector<node> > q;
int dis[N],visd[N];
int res=0,cnt=0;
int n,m;
void prim()
{
    memset(dis,63,sizeof(dis));
    dis[1]=0;
    q.push(node(1,0));
    while(q.size())
    {
        if(cnt>=n) break;
        int u=q.top().id;
        q.pop();
        if(visd[u]) continue;
        visd[u]=1;
        cnt++;
        for(auto t:g[u])
        {
            if(dis[t.to]>t.w)
            {
                dis[t.to]=t.w;
                q.push(node(t.to,dis[t.to]));
                res+=dis[t.to];
            }
        }
    }

}
void slove()
{
    cin >> n >> m;
    for(int i=0,u,v,w;i<m;i++)
    {
        cin >> u >> v >> w;
        g[v].push_back(edge(u,w));
        g[u].push_back(edge(v,w));
    }
    prim();
    if(cnt==n) cout << res << "\n";
    else cout << "orz" << "\n";
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        slove();
    }
    return 0;
}
