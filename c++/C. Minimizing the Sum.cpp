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
    int n,k;cin >> n >> k;
    vector <ll> a(n);
    vector<vector<ll> > dp(n + 1, vector<ll>(k + 1, mod));
    for(int i = 0;i < n;i ++){
        cin >> a[i];
    }

    for(int i = 0;i < n;i ++){
        for(int j = 0;j < k;j ++){
            ll mn = mod;
            for(int d = 0;j + d <= k && i + d < n;d ++){
                mn = min(a[i + d],mn);
                dp[i + d][j + d] = min(dp[i + d + 1][j + d],dp[i][j] + mn * (d + 1));
            }
        }
    }
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
