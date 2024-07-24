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
    ll sum = 0ll;
    for(int i = 0;i < n;i ++)
    {
        cin >> a[i];
        sum += a[i];
    }
    ll res = sum / n;
    int ans = 0;
    for(int i = 1;i <= res; i ++)
    {
        if(sum % i == 0 && !mp[i])
        {
            ans ++;
            mp[i] = 1;
        }
    }
    if(n == 1) ans = 1ll;
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
