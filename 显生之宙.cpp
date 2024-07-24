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
    vector <ll> a(n + 1);
    for(int i = 1;i <= n;i ++){
        cin >> a[i];
    }
    sort(a.begin() + 1,a.end(),less<ll>());
    vector <ll> t(n + 1);
    ll idx = upper_bound(a.begin(),a.end(),0ll) - a.begin();
    // cout << idx << "\n";
    if(idx > n) idx = n;
    for(int i = 1;i <= n;i ++){
        t[i] = a[i] - a[i - 1];
        // cout << t[i] << '\n';
        
    }
    ll ant = 0ll;
    for(int i = 2;i <= idx;i ++){
        ant += t[i - 1];
        t[i] += ant;
        // cout << ant << ' ';
    }
    ll sum = 0ll,ans = 0ll;
    for(int i = 1;i <= n;i ++){
        sum += t[i];
        // cout << t[i] << "\n";
        if(sum > 0) ans += sum;
        // cout << sum << "\n";
    }
    if(sum < 0) ans += sum;
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
