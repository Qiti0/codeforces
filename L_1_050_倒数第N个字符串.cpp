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
    ll m;cin >> m;
    vector <ll> s(n + 1);
    s[0] = 1ll;
    for(int i = 1;i <= n;i ++)
    {
        s[i] = s[i - 1] * 26ll;
        // cout << s[i] << "\n";
    }
    m = s[n] - m;
    string ans;
    for(int i = n - 1;i >= 0;i --)
    {
        ans += 'a' + (m / s[i]);
        m %= s[i];
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
