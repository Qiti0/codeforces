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
    ll n;cin >> n;
    ll m = n;
    int idx = 0;
    while(n)
    {
        ll t = n & 1ll;
        n >>= 1ll;
        if(t == 1ll){
            break;
        }
        idx ++;
    }
    // cout << idx << "\n";
    ll ans = 1ll << idx;
    // cout << ans << "\n";
    if(ans >= m) cout << -1 << "\n";
    else cout << m - ans << "\n";
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
