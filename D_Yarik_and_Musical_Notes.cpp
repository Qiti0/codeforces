#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

map <int,ll> mp;
void solve()
{
    int n;cin >> n;
    vector <int> a(n);
    mp.clear();
    for(int i =0;i < n;i ++) cin >> a[i];
    ll ans = 0ll;
    for(int i = 0;i < n;i ++)
    {
        mp[a[i]] ++;
    }   
    for(auto it : mp)
    {
        if(it.second >= 2)
        {
            ans += (it.second) * (it.second - 1) / 2ll;
        }
    }
    ans += mp[1] * mp[2];
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
