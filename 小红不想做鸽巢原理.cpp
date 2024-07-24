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
    ll sum = 0ll;
    for(int i = 0;i < n;i ++) cin >> a[i],a[i] %= k,sum += a[i];
    sort(a.begin(),a.end());
    sum %= k;
    if(sum == 0){
        cout << 0 << "\n";
        return;
    }
    ll cnt = 0,ans = 0;
    for(int i = n - 1;i >= 0;i --){
        cnt += a[i];
        ans ++;
        if(cnt >= sum) break;
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
