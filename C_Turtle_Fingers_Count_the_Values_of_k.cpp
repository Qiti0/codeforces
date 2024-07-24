#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

map <ll,ll> mp;
void solve()
{
    ll a,b,l;cin >> a >> b >> l;
    mp.clear();
    int ans = 0;
    for(ll i = 1ll;i <= l;i *= a)
    {
        for(ll j = 1ll;j <= l;j *= b)
        {
            if(l % (i * j) == 0ll && !mp[i * j])
            {
                ans ++;
                mp[i * j] ++;
            } 
        }
    }
    cout << ans << "\n";
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
