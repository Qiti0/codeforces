#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

int a[N];
int b[N];
void solve()
{
    memset (b, 0 ,sizeof(b));
    int n;cin >> n;
    int mx = -1e9;
    for( int i = 0; i < n;i ++ ) cin >> a[i],mx = max(mx,a[i]);
    if(n == 1) 
    {
        cout << 1 << "\n";
        return;
    }
    int g = 0;
    for(int i = 1;i < n;i ++) g = gcd(g , a[i]-a[i-1]);
    // cout << g << "\n";
    ll ans = 0;
    for(int i = 0;i < n;i ++)
    {
        a[i] = (mx - a[i]) / g;
        ans += a[i];
        if(a[i] <= n)
        {
            b[a[i]] ++;
        }
    }
    int flag = 0;
    while(b[flag])
    {
        flag ++;
    }
    ans += flag;
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
