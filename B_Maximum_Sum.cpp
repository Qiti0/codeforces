#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
const ll mod = 1e9+7;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

ll fast(ll a,ll n){
    ll res = 1ll;
    while(n > 0){
        if(n & 1){
            res *= a;
            res %= mod;
        }
        a *= a;
        a %= mod;
        n >>= 1;
    }
    return res % mod;
}
void solve()
{
    ll n,k;cin >> n >> k;
    vector <int> a(n);
    ll res = 0ll;
    for(int i = 0;i < n;i ++) cin >> a[i],res += a[i];
    ll sum = 0ll;
    ll mx = 0ll;
    for(int i = 0;i < n; i ++){
        if(sum < 0) sum = 0ll;
        sum += a[i];
        mx = max(mx,sum);
    }
    res -= mx;
    mx %= mod;
    // cout << mx << "\n";
    sum = res + ((fast(2,k) * mx) % mod);
    // cout << fast(2ll,k) * mx << "\n";
    ll ans = 0ll;
    if(sum < 0ll){
        for(ll i = 1;i <= (ll)2e5;i ++){
            if(i * mod + sum < mod && i * mod + sum > 0ll){
                ans = i * mod + sum;
                break;
            }
        }   
    }else ans = sum % mod;
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
