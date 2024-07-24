#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
// const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

ll f[N];
void solve()
{
    int n,k;cin >> n >> k;
    f[0] = 1;
    for(int i = 1;i <= k; i ++)
    {
        for(int j = i;j <= n;j ++)
        {
            f[j] += f[j - i];
        }
    }
    // for(int i = 1;i <= n;i ++) cout << f[i] <<"\n";
    cout << f[n] << "\n";
}
int main()
{
    // std::ios::sync_with_stdio(false);
    // std::cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
