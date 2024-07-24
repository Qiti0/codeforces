#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

int t[110];
struct OP
{
    int op,z;
}opr[110];
char G[110][110];
void solve()
{
    int n,m,x,y;cin >> n >> m >> x >> y;
    for(int i = 0;i < n;i ++)
    {
        for(int j = 0;j < m;j ++)
        {
            cin >> G[i][j];
        }
    }
    // for(int i = 0;i < n;i ++)
    // {
    //     for(int j = 0;j < m;j ++)
    //     {
    //        cout << G[i][j];
    //     }
    // }
    int p,q;cin >> p >> q;
    for(int i = 0;i < q;i ++)
    {
        cin >> opr[i].op >> opr[i].z;
    }
    while(p --)
    {
        for(int i = 0;i < q;i ++)
        {
            if(opr[i].op == 1)
            {
                for(int j = m - 1;j >= 0;j --)
                {
                    G[opr[i].z - 1][j + 1] = G[opr[i].z - 1][j];
                }
                G[opr[i].z - 1][0] = G[opr[i].z - 1][m];
            }else{
                int idx = opr[i].z - 1;
                for(int j = n - 1;j >= 0;j --)
                {
                    G[j + 1][idx] = G[j][idx];
                }
                G[0][idx] = G[n][idx];
            }
        }
    }
    //    for(int i = 0;i < n;i ++)
    // {
    //     for(int j = 0;j < m;j ++)
    //     {
    //        cout << G[i][j];
    //     }
    //     cout << "\n";
    // }
    cout << G[x - 1][y - 1] << "\n";
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
