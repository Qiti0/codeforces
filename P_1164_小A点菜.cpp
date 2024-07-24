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
    int n,m;cin >> n >> m;
    vector <int> a(n + 1);
    for(int i = 1;i <= n;i ++) cin >> a[i];
    // vector <vector <int> > f(n + 1,vector <int> (m + 1));
    //w[i] + a[i] < m,f[i] = f[i - 1] + 1
    vector <int> dp(m + 1);
    dp[0] = 1;
    // for(int i = 1;i <= n;i ++){
    //     for(int j = 1;j <= m;j ++){
    //         if(j < a[i]) f[i][j] = f[i - 1][j];
    //         if(j > a[i]){
    //             f[i][j] = f[i - 1][j - a[i]] + f[i - 1][j];
    //         }
    //         if(j == a[i]) f[i][j] = f[i - 1][j] + 1;
    //     }
    // }
    // cout << f[n][m] << "\n";
    for(int i = 1;i <= n;i ++){
        for(int j = m;j >= a[i];j --){
            dp[j] = dp[j - a[i]] + dp[j];
        }
    }
    cout << dp[m] << "\n";
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

