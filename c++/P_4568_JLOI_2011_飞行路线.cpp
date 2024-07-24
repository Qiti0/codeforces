#include <bits/stdc++.h>
using namespace std;
const double pi = acos(-1);
const int N = 5e4 + 10;
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
    int id,w,used;
    bool operator < (const node x)const
    {
        return w>x.w;
    }
    node(int uused,int ww,int iid)
    {
        id=iid;
        w=ww;
        used=uused;
    }
};
vector<edge> g[N];
priority_queue<node,vector<node> >q;
int n,m,k;
int visd[N][15],dis[N][15];
void dijstra(int s)
{
    memset(dis,63,sizeof(dis));
    dis[s][0]=0;
    q.push(node(0,0,s));
    while(q.size())
    {
        int now=q.top().id;
        int kk=q.top().used;
        q.pop();
        if(visd[now][kk]) continue;
        visd[now][kk]=1;
        for(auto t:g[now])
        {
            if(dis[t.to][kk]>dis[now][kk]+t.w)
            {   
                dis[t.to][kk]=dis[now][kk]+t.w;
                q.push(node(kk,dis[t.to][kk],t.to));
            }
            if(kk+1<=k&&dis[t.to][kk+1]>dis[now][kk])
            {
                dis[t.to][kk+1]=dis[now][kk];
                q.push(node(kk+1,dis[t.to][kk+1],t.to));
            }
        }
    }
}

void slove()
{
    cin >> n >> m >> k;
    int s,t;cin >> s >> t;
    for(int i=1;i<=m;i++)
    {
        int u,v,w;cin >> u >> v >> w;
        g[u].push_back(edge(v,w));
        g[v].push_back(edge(u,w));
    }
        dijstra(s);
    int ans=0x7f7f7f7f;
    for(int i=0;i<=k;i++)
    {
        ans=min(ans,dis[t][i]);
    }
    cout << ans << "\n";
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