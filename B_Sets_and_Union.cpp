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
    int n;cin >> n;
    vector <ll> a(n);
    ll Or = 0ll;
    for(int i = 0;i < n;i ++)
    {
        int k;cin >> k;
        while(k --)
        {
            int x;cin >> x;
            a[i] |= (1ll << x); 
        }
        Or |= a[i];
    }
    int ans = 0ll;
    ll res = 0ll;
    for(int i = 1;i <= 50;i ++)
    {
        if((Or >> i) & 1)
        {
            res = 0ll;
            for(int j = 0;j < n;j ++)
            {
                if((~a[j] >> i) & 1)
                {
                    res |= a[j];
                }
            }
        }
        ans = max(ans,__builtin_popcountll(res));
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
