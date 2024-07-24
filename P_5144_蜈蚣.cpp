#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

int a[N];
int f[1100][110];
void solve()
{
    int n , m;cin >> n >> m;
    for(int i = 1;i <= n;i ++) 
    {
        cin >> a[i];
        a[i] ^= a[i - 1];
    }
    for(int i = 1;i <= n;i ++)
    {
        f[i][1] = a[i];
    }
    for(int j = 2;j <= m;j ++)
    {
        for(int k = 1;k <= n;k ++)
        {
            for(int i = k;i <= n;i ++)
            {
                f[i][j] = max(f[i][j] , f[k][j - 1] + (a[k] ^ a[i]));
            }
        }
    }
    cout << f[n][m] << "\n";
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
