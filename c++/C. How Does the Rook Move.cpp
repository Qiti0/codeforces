#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
const double pi = acos(-1.0);
const ll N = 300010;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

ll dp[N];

void solve()
{
    ll n,k;cin >> n >> k;
    while(k --){
        int r,c;cin >> r >> c;
        n -= (r == c ? 1 : 2);
    }
    dp[0] = dp[1] = 1ll;
    for(ll i = 2ll;i <= n;i ++){
        dp[i] = (dp[i - 1] + (2ll * (i - 1ll) * dp[i - 2ll]) % mod ) % mod;
    }
    cout << dp[n] << "\n";

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
