#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;


void solve()
{
    ll a,b,r;cin >> a >> b >> r;
    if(a < b) swap(a,b);
    ll mx = max(a , b);
    ll mn = min(a , b);
    ll ans = 0ll;
    ll t = 0ll;
    ll ant = 0ll;
    // ll cnt = mx - mn;
    while(mx)
    {
        mx >>= 1ll;
        mn >>= 1ll;
        ant ++;
        if(mx % 2ll == 1ll && mn % 2ll == 0ll)
        {
            t = max (ant , t);
        }
    }
    // cout << t << "**\n";
    for(ll i = t - 1ll;i >= 0ll;i --)
    {
        // cout << (a & (1ll << i)) << "**\n";
      if( (a & (1ll << i)) && !(b & (1ll << i)) && ans + (1ll << i) <= r)
        {
            ans += 1ll << i; 
            // cout << ans << "&&\n";
        } 
    }
    // cout << ans << "&&\n";
    ans = abs((a ^ ans) - (b ^ ans));
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
