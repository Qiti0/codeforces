#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

bool prime(int n)
{
    if(n == 1) return false;
    if(n == 2) return true;
    for(int i = 2;i <= sqrt(n);i ++)
    {
        if(n % i == 0) return false;
    }
    return true;
}
void solve()
{
    int l,r;cin >> l >> r;
    int ans = -1;
    for(int i = 2;i <= 100;i ++)
    {
        for(int j = 2;j <= 100;j ++)
        {
            for(int k =2;k <= 100;k ++)
            {
                if(prime(i) && prime(j) && prime(k) && i != j && j != k && i != k)
                {
                    if(i * j * k <= r && i * j * k >= l)
                    {
                        ans = i * j * k;
                        cout << ans << "\n";
                        return;
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
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
