#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

int a[N];
ll s[N];
void solve()
{
    ll n,q,t;cin >> n >> q >> t;
    for(int i = 1;i <= n;i ++) cin >> a[i];
    sort(a + 1, a + n + 1,greater());
    for(int i = 1;i <= n;i ++) s[i] = s[i - 1] + a[i];
    while(q --)
    {
        ll m;cin >> m;
        ll ans = 0ll;
        ll idx = min(n ,m / t);
        // cout << m << "\n";
        // cout << idx << "\n";
        ans = s[n] - s[idx] + t;
        cout << ans << '\n';
    }
}
int main()
{
    // std::ios::sync_with_stdio(false);
    // std::cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
