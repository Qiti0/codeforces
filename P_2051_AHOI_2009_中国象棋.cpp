#include <bits/stdc++.h> 
using namespace std;
const int mod = 9999973;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

ll a[110];
void solve()
{
    int n,m;cin >> n >> m;
    a[0] = 1;
    for(int i = 1;i <= 100;i ++)
    {
        a[i]=a[i - 1] + i;
        // cout << a[i] << "\n";
    }
    ll ans = 1;
    for(int i = 0;i < min(m , n);i ++)
    {
        ans *= a[max(m , n)];
        ans %= mod;
    }
    if(n == 1 || m == 1)
    {
        ans = n==1 ? a[m] : a[n];
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
