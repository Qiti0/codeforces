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
    ll n;cin >> n;
    vector <ll> a(n);
    vector <ll> b;
    for(ll i = 0;i < n;i ++) cin >> a[i];
    ll ant = 0;
    ll ant1 = 0;
    sort(a.begin(),a.end());
    ll mx = 0;
    for(ll i = 0;i < n;i ++){
        if(a[i] & 1){
            mx = max(mx,a[i]);
            ant ++;
        }else{
            b.push_back(a[i]);
            ant1 ++;
        }
    }
    if(ant == n || ant1 == n){
        cout << 0 << "\n";
        return;
    }
    ll ans = b.size();
    for(auto it : b){
        if(mx > it){
            mx += it;
        }else{
            ans ++;
            break;
        }
    }
    cout  << ans << "\n";
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
