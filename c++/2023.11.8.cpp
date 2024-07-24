#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 1e6 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

ll f[N];
void solve()
{
    int n;cin >> n;
    int a,b,c;cin >> a >> b >> c;
    f[0] = 1;
    for(int i = a;i <= n;i ++)
    {
        f[i] = (f[i] + f[i - a]) % mod;
        if(i >= b) f[i] = (f[i] + f[i - b]) % mod;
        if(i >= c) f[i] =(f[i] + f[i - c]) % mod;
    }
    cout << f[n] % mod << "\n";
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
