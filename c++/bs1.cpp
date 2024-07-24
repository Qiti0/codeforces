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
    int n;cin >> n;
    vector <int> a(n + 1),b(n + 1);
    vector <int> sa(n + 1),sb(n + 1);
    for(int i = 1;i <= n;i ++) cin >> a[i];
    for(int j = 1;j <= n;j ++) cin >> b[j];
    for(int i = 1;i <= n;i ++){
        sa[i] = sa[i - 1] + a[i];
        sb[i] = sb[i - 1] + b[i];
    }
    
    int ans1 = 0 ,ans2 = 0,mx = 1e9,ans = 1e9;
    for(int i = 1;i <= n;i ++){
        ans1 = sb[i - 1];
        ans2 = sa[n] - sa[i];
        // cout << ans1 << " " << ans2 << "\n";
        mx = max(ans1,ans2);
        ans = min(ans,mx);
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
