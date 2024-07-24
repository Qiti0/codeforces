#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

int fa[N],h[N];
inline void init(int n)
{
    for(int i=1;i<=n;i++)
    {
        fa[i]=i;
        h[i]=1;
    }
}
int find(int x)
{
    return x==fa[x]?x:(fa[x]=find(fa[x]));
}
void merge(int i,int j)
{
    int x=find(i),y=find(j);
    if(h[x]<=h[y])
    {
        fa[x]=y;
    }else{
        fa[y]=x;
    }
    if(h[x]==h[y]&&x!=y)
    {
        h[y]++;
    }
}
struct Point
{
    double x,y,z;
    // Point(int xx,int yy,int zz):x(xx),y(yy),z(zz){};
}p[N];
double dis(Point x,Point y)
{
    return sqrt(1.0*((x.x-y.x)*(x.x-y.x))+((x.y-y.y)*(x.y-y.y))+((x.z-y.z)*(x.z-y.z)));
}
int down[N],up[N];
void solve()
{
    int n,h,r;cin >> n >> h >> r;
    init(n);
    memset(down,0,sizeof(down));
    memset(up,0,sizeof(up));
    for(int i=1;i<=n;i++)
    {
        cin >> p[i].x >> p[i].y >> p[i].z;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(dis(p[i],p[j])<=2*r*1.0)
            {
                merge(i,j);
            }
        }
    }
    int d=0,u=0;
    for(int i=1;i<=n;i++)
    {
        if(p[i].z<=r)
        {
            down[++d]=i;
        }
        if(p[i].z+r>=h)
        {
            up[++u]=i;
        }
    }
    for(int i=1;i<=d;i++)
    {
        for(int j=1;j<=u;j++)
        {
            if(find(down[i])==find(up[j]))
            {
                cout << "Yes" << "\n";
                return;
            }
        }
    }
    cout << "No" << "\n";
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
