#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;


void solve()
{
    int n,m;cin >> n >> m;
    int ans = 0;
    if(m & 1)
    {
        ans += (m - 1) / 2;
    }else{
        ans += m / 2;
    }
    ans *= n;
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
