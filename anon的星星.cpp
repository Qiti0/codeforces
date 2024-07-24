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
    int n,x;cin >> n >> x;
    int w = 0;
    int ans = -1;
    for(w = 1;w <= n;w ++)
    {
        if(2 * w - n == x) 
        {
            ans = w;
            break;
        }
    }
    if(ans != -1) 
    {
        cout << ans <<" "<< n - ans << "\n";
    }else cout << ans << "\n";
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
