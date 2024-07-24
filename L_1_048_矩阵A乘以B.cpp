#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

int a[210][210];
int b[210][210];
int c[210][210];
void solve()
{
    int n1,m1;cin >> n1 >> m1;
    for(int i = 0;i < n1;i ++)
    {
        for(int j = 0;j < m1;j ++)
        {
            cin >> a[i][j];
        }
    }
    int n2,m2;cin >> n2 >> m2;
    for(int i = 0;i < n2;i ++)
    {
        for(int j = 0;j < m2;j ++)
        {
            cin >> b[i][j];
        }
    }
    if(m1 != n2)
    {
        cout << "Error: 2 != 3" <<"\n";
        return;
    }else{
        for(int i = 0;i < m2;i ++)
        {
            for(int j = 0;j < n1;j ++)
            {
                c[i][j] = a[i][j] * b[j][i];
            }
        }
    }
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
