#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

ll w[N],v[N];
ll f[N];
void solve()
{
    ll n , m;cin >> n >> m;
    for(ll i = 0;i < n;i ++)
    {
        cin >>  w[i] >> v[i];
    }
    for (ll i = 0;i < n;i ++)
    {
        for(ll j = m;j >= w[i];j --)
        {
            f[j] = max(f[j] , f[j - w[i]] + v[i]);
        }
    }
    cout << f[m] << "\n";
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
