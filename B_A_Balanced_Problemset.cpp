#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

int x,n;

void solve()
{
    cin >> x >> n;
    int ans=1;
    for(int i = 1;i * i <= x;i ++)
    {
        if(x % i == 0)
        {
            if(n <= i)
            {
                ans = max(ans , x / i);
            }
            if(n <= x / i)
            {
                ans = max(ans , i);
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
