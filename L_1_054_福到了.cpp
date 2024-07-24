#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

string m[110];
string g[110];
void solve()
{
    char a;cin >> a;
    int n;cin >> n;
    // getchar();
    for(int i = 0;i <= n;i ++)
    {
        getline(cin,m[i]);
    }
    // for(int i = 0;i <= n;i ++) cout << m[i] << "\n";
    string ans = "bu yong dao le";
    for(int i = 0;i <= n;i ++)
    {
        for(int j = 0;j < n;j ++)
        {
            // if(m[i] != "\n") cout << m[i][j];
            if(m[i][j] == '@')
            {
                g[i][j] = a;
            }else if(m[i][j] == ' ')g[i][j] = ' ';
        }
        // cout << "\n";
    }
    // cout << ans << "\n";
    for(int i = n;i >= 0;i --)
    {
        for(int j = n - 1;j >= 0;j --)
        {
            // cout << m[n - i + 1][n - 1 - j];
            if(m[i][j] != m[n - i + 1][n - j - 1])
            {
                ans = "";
            }
        }
        // cout << "\n";
    }
    if(ans != "") cout << ans << "\n";
    for(int i = n;i > 0;i --)
    {
        for(int j = n - 1;j >= 0;j --)
        {
            cout << g[i][j];
        }
        cout << "\n";
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
