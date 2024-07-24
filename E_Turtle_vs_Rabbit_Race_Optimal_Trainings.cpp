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
    vector <int> a(n + 1);
    for(int i = 1;i <= n;i ++) cin >> a[i];
    vector <ll> s(n + 1);
    for(int i = 1;i <= n;i ++)
    {
        s[i] = s[i - 1] + a[i];
    }
    // vector <ll> :: iterator iter = s.end() - 1;
    // cout << *iter;
    int q;cin >> q;
    while(q --)
    {
        ll l,u;cin >> l >> u;
        // cout << u <<"\n";
        int r = upper_bound(s.begin() + 1,s.end(),u + s[l - 1]) - s.begin();
        r = min(r , n); 
        int ans = r;
        ll num1 = s[r] - s[l - 1],num2 = s[r - 1] - s[l - 1];
        ll res1 = (u + u - num1 + 1ll) * num1 / 2ll;
        ll res2 = (u + u - num2 + 1ll) * num2 / 2ll;
        // cout << r << " " << res1 << " " << res2 << "\n";
        if(res2 >= res1 && res2) ans = r - 1;
        cout << ans << " ";
    }
    cout << "\n";
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
