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
    ll n,x;cin >> n >> x;
    vector <ll> a(n);
    for(int i = 0;i < n;i ++) cin >> a[i];
    vector <ll> s(n + 1);
    for(int i = 0;i < n;i ++) s[i + 1] = s[i] + a[i];
    // for(int i = 0;i < n;i ++) cout << s[i] << ' ';
    // cout << "\n";
    ll ans = (n + 1ll) * n / 2ll;

    vector <ll> dp(n + 1);
    for(int i = n,j = n + 1;i >= 0;i --){
        while(s[j - 1] - s[i] > x){
            j --;
        }
        dp[i] = 1 + (j <= n ? dp[j] : 0);
        // cout << dp[i] << ' ';
        ans -= dp[i] - 1;
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
