#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

map <int,int> mp;
void solve()
{
    int n;cin >> n;
    mp.clear();
    vector <int> a(n);
    for(int i = 0;i < n;i ++) cin >> a[i],mp[a[i]] ++;
    ll ans = 0ll;
    ans += mp[3] * mp[6] + mp[7] * mp[2];
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
