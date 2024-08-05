#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
int inf = 0x3f3f3f3f;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}


void solve()
{
    int n,m,k;cin >> n >> m >> k;
    string s;cin >> s;
    s = 'L' + s;
    vector <int> dp(n + 2,inf);
    dp[0] = 0;
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= min(i,m);j ++){
            if(s[i - j] == 'L') dp[i] = min(dp[i],dp[i - j]);
        }
        if(s[i - 1] == 'W') dp[i] = min(dp[i],dp[i - 1] + 1);
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
