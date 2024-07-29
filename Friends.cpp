#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<ll,ll> pii;
inline int lowbit(int x) {return x & (- x);}

map <pii,int> mp;
void solve()
{
    mp.clear();
    ll n,m;cin >> n >> m;
    while(m --){
        int x,y;cin >> x >> y;
        if(x > y) swap(x,y);
        mp[{x,y}] = 1;
    }

    ll ans = n,l = 1,r = n;
    for(ll i = 1;i <= n;i ++){
        for(ll j = i + 1;j <= n;j ++){
            if(!mp[{i,j}]){
                r = min(r,j - 1);
                break;
            }

            if(i >= r){
                ans += (r - l + 1) * (r - l) / 2;
                // cout << ans << "\n";
                l = i;
                r = n;
            }
        }
    }
    ans += (r - l) * (r - l + 1) / 2;
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
