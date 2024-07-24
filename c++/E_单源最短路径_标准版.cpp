#include <bits/stdc++.h>
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

struct node{
    int to,w;
    node(int tto,int ww)
    {
        to=tto;
        w=ww;
    }
};
vector <node> g[N];
bool vied[N];
int dist[N];
priority_queue<pii,vector<pii>,greater<pii> > heap;
int n,m,s;
void dijkstra()
{
    memset(dist,0x3f,sizeof(dist));
    dist[1]=0;
    heap.push({0,1});
    while(heap.size())
    {
        pii t=heap.top();
        heap.pop();
        int vis=t.second;
        if(vied[vis]) continue;
        vied[vis]=1;    
        for(auto ed:g[vis])
        {
            int to=ed.to;
            int w=ed.w;
            if(dist[to]>dist[vis]+w)
            {
                dist[to]=dist[vis]+w;
                heap.push({dist[to],to});
            }
        } 
    }
}
void slove()
{
    cin >> n >> m>>s;
    for(int i=1;i<=m;i++)
    {
        int a,b,c;cin >> a >> b >> c;
        g[a].push_back(node(b,c));
    }
    dijkstra();
    for(int i=1;i<=n;i++) cout << dist[i] <<" ";
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