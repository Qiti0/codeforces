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
    vector <int> a(n + 2);
    for(int i = 1;i <= n;i ++) cin >> a[i];
    ll ans = 0ll;
    ll l = 0,r = 0; 
    a[n + 1] = 2e9;
    ans += a[1] - 1;
    for(int i = 2;i <= n;i ++)
    {
        r = a[i] - 1 - l;
        if(r + 1 <= a[i + 1]) l = r;
        else l = a[i + 1] - 1;
        ans += l;
        cout << l << " " << r << "\n";
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
