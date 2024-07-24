#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1.0);
const int mod = 1e9+7;
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

ll f[N];
void solve()
{
    int n;cin >> n;
    f[1]=3ll,f[2]=9ll;
    for(int i=2;i<n;i++)
    {
        f[i+1]=2ll*(f[i-1]%mod+f[i]%mod)%mod;
    }
    cout << f[n] << '\n';
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
