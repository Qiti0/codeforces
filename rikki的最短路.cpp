#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}


void solve()
{   
    ll t,a,k;cin >> t >> a >> k;
    ll u = 0;
    ll ans = 0ll;
    ll dis = abs(t - a);
    if(a >= 0)
    {
        u = a - k;
        if(a >= k)
        {
            if(u >= 0 && u <= t)
            {
                ans += a + dis;
            }else{
                ans += abs(t) + 2ll * dis;
            }
        }else {
            ans += a + dis;
        }
    }else {
        u = k + a;
        if(u <= 0)
        {
            if(u <= 0 && u >= t)
            {
                ans += abs(a) + dis;
            }else{
                ans += abs(t) + 2 * dis;
            }
        }else {
            ans += abs(a) + dis;
        }
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
        solve();
    }
    return 0;
}
