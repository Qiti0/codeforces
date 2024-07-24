#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;


void solve()
{
    int n,q;cin >> n >> q;
    vector <int> a(n + 1);
    for(int i = 1;i <= n;i ++) cin >> a[i];
    while(q --)
    {
        int l,r;cin >> l >> r;
        int mx = 0,mn = 1e6 + 1;
        for(int i = l;i <= r;i ++)
        {
            mx = max(mx , a[i]);
            mn = min(mn , a[i]);
        }
        cout << mx - mn << "\n";
    }
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
