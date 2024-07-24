#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

map<int,int> mp;
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
void solve()
{
   int n,k;cin >> n >> k;
   init(n);
   while(k--)
   {
        int x,y;cin >> x >> y;
        merge(x,y);
   }
   for(int i = 1;i <= n;i ++)
   {
        mp[find(i)]++;
   }
   int ans=0;
   for(auto it:mp)
   {
        if(it.second) ans++;
   }
   cout << ans-1 << "\n";
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
