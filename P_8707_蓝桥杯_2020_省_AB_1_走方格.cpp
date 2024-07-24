#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

int f[35][35];
void solve()
{
    int m,n;cin >> m >> n;
    f[0][1] = 1;
    for(int i = 1;i <= n;i ++)
    {
        for(int j = 1;j <= m;j ++)
        {
            f[i][j] = f[i - 1][j] + f[i][j - 1];
            if(i % 2 == 0 &&j % 2 == 0 ) f[i][j] = 0;
        }
    }
    cout << f[n][m] << '\n';
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
