#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

char a[510][510];
int vis[510][510];
void solve()
{
    int n,m;cin >> n >> m;
    for(int i = 0;i < n;i ++)
    {
        for(int j = 0;j < m;j ++)
        {
            cin >> a[i][j];
        }
    }
    //   for(int i = 0;i < n;i ++)
    // {
    //     for(int j = 0;j < m;j ++)
    //     {
    //         cout << a[i][j];
    //     }
    //     cout << "\n";
    // }
    int ans = 0;
    for(int i = n - 1;i >= 0;i --)
    {
        int cnt = 0; 
        for(int j = 0;j < m;j ++)
        {
            if(a[i][j] == '*')
            {
                cnt ++;
            }else cnt = 0;
            if(cnt > 1 && cnt & 1)
            {
                vis[i - 1][j - 1] = cnt;
            }
        }

    }
}
int main()
{
    // std::ios::sync_with_stdio(false);
    // std::cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
