#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}


map <ll,ll> mp;
void solve()
{
    mp.clear();
    ll n,m;cin >> n >> m;
    vector <ll> a(n);
    ll ans = 0ll;
    for(ll i = 0ll;i < n;i ++) cin >> a[i],mp[a[i]] ++;

    // sort(a.begin(),a.end());
    for(auto [x,y] : mp){
        ans = max(ans,x * min(m / x,mp[x]));
        if(mp.count(x + 1)){
            for(int j = 1;j <= mp[x] && j * x <= m;j ++){
                ans = max(ans,j * x + (x + 1) * min(mp[x + 1],(m - j * x) / (x + 1)));
            }
        }
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
