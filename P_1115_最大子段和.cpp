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
    vector <int> a(n);
    for(int i = 0;i < n;i ++) cin >> a[i];
    vector <int> f(n);
    f[0] = a[0];
    int ans = a[0];
    for(int i = 1;i < n;i ++){
        f[i] = max(f[i - 1] + a[i],a[i]);
        // cout << f[i] << "\n";
        ans = max(f[i],ans);
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
