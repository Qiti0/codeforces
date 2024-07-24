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
    ll n,k;cin >> n >> k;
    vector <ll> a(n);
    for(ll i = 0ll;i < n;i ++) cin >> a[i];
    ll l = 1ll,r = 100,m;
    while(l < r){
        m = (l + r + 1ll) / 2ll;
        ll cnt = 0ll;
        for(ll i = 0ll;i < n;i ++){
            if(a[i] < m) cnt += m - a[i]; 
        }
        if(cnt <= k){
            l = m;
        }else{
            r = m - 1ll;
        }
        cout << l << " " << m << " " << r << "\n";
    }
    ll ans = l + (n - 1ll) * (l - 1ll);
    ll ant = 0ll;
    for(ll i = 0ll;i < n;i ++){
        if(a[i] > l){
            ant ++;
        }
        if(a[i] < l){
            k -= l - a[i];
        }
    }
    ans += ant;
    ans += min(n - ant,k);
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
