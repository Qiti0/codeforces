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
    int ans = 1e9;
    for(int i = 0;i <= 2;i ++)
    {
        for(int j = 0;j <= 1;j ++)
        {
            for(int k = 0;k <= 4;k ++)
            {
                for(int l = 0;l <= 2;l ++)
                {
                    int cnt = i + 3 * j + 6 * k + 10 * l;
                    int num = i + j + k + l;
                    if(n - cnt >= 0 && (n - cnt) % 15 == 0)
                    {
                        num += (n - cnt) / 15;
                        ans = min(ans, num);
                    }
                }
            }
        }
    }
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
