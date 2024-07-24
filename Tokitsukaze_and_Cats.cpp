#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 310;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

int g[N][N];
int st[N][N];
void solve()
{
    int n,m,k;cin >> n >> m >> k;
    memset(g,0,sizeof (g));
    memset(st,0,sizeof (st));
    int ans = 0;
    while(k --)
    {
        int x,y;cin >> x >> y;
        g[x][y] = 1;
        ans += 4;
        // cout << i << " " << j << "**\n";
        for(auto [dx,dy]:vector<pii>{{1,0},{0,-1},{-1,0},{0,1}})
        {
            // cout << i+dx << " " << j +dy << "&&\n";
            if(g[x + dx][y + dy] == 1)
            {
                ans --;
            // cout << dx+x << " " << dy + y << "\n";
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
