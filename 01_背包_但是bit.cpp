#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

int v[N],w[N];
ll res, ans;
int n,m;
void check(int x)
{
    res = 0;
    for(int i = 0;i < n;i ++)
    {
        if((x & w[i]) == w[i])
        {
            res += v[i];
        }
    }
    ans = max(ans , res);
}
void solve()
{
    cin >> n >> m;
    ans = 0;
    for(int i = 0;i < n;i ++) cin >> v[i] >> w[i];
    for(int i = 29;i >= 0;i --)
    {
        if((m >> i) & 1)
        {
            int bef = (m ^ (1 << i));//确保当前位不为零
            int aft = ((1 << i) - 1);//确保后面位最大
            check(bef | aft);
        }
    }
    check(m);
    cout << ans << "\n";
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int _ = 1;cin >> _;
    while (_--)
    {
        solve();
    }
    return 0;
}
