#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

struct sito
{
    ll a,b,c,d;
};
void solve()
{
    int n;cin >> n;
    vector <sito> a(n);
    for(int i = 0;i < n;i ++) 
    {
        cin >> a[i].a >> a[i].b >> a[i].c >> a[i].d;
    }
    ll ans = 0ll;
    auto dfs = [&] (auto self ,int x,ll hp,ll wh) -> void
    {
        if(x == n)
        {
            ans = max(ans,hp * wh);
            return;
        }
        self(self,x + 1,max(0ll,hp - a[x].b),wh + a[x].a);
        self(self,x + 1,hp + a[x].c,max(0ll,wh - a[x].d));
    };
    dfs(dfs,0,0ll,0ll);
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
        solve();
    }
    return 0;
}
