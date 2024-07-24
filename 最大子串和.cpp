#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 1e6 + 10;
typedef long long ll;
typedef pair<int,int> pii;

ll a[N],num[N];
void solve()
{
    ll ans=0;
    int n;cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++)
    {
        num[i]=max(a[i],num[i-1]+a[i]);
        ans=max(ans,num[i]);
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
