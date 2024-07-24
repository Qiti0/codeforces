#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

int a[N],u[N],v[N];
map <int,int> mp;
// vector <pii> str {{3,0},{0,3},{1,1}};
void solve()
{
    int n,m;cin >> n >> m;
    // mp.clear();
    for(int i = 1;i <= n;i ++) cin >> a[i];
    for(int i = 1;i <= m;i ++) cin >> u[i] >> v[i];
    int ans = n;

    auto dfs = [&](auto &&self ,int i) -> void
    {
        if(i > m)
        {
            int res = 1;
            for(int i = 1;i <= n;i ++)
            {
                if(a[1] < a[i]) res ++;
            }
            ans = min(res , ans);
            return;
        }
        for(auto [x,y] : vector <pii>{{3,0},{0,3},{1,1}})
        {
            a[u[i]] += x;
            a[v[i]] += y;
            self(self,i + 1);
            a[u[i]] -= x;
            a[v[i]] -= y;
        }
    };
    dfs(dfs,0);
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
