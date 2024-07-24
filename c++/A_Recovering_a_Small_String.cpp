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
    int n;cin >> n;
    string ans;
    for(int i = 0;i <= 25;i ++)
        for(int j = 0;j <= 25;j ++)
            for(int k = 0;k <= 25;k ++)
            {
                if((i + j + k) == n - 3)
                {
                    ans = ('a' + i); 
                    ans +=('a' + j); 
                    ans +=('a' + k);
                    cout << ans << "\n";
                    return;
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
