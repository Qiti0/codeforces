#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

char a[20][20];
void solve()
{
    int n;cin >> n;
    for(int i = 0;i < n;i ++)
    {
        for(int j = 0;j < n;j ++)
        {
            cin >> a[i][j];
        }
    }
    string ans = "SQUARE";
    for(int i = 0;i < n;i ++)
    {
        int cnt = 0;
        for(int j = 1;j + 1 < n;j ++)
        {
            if(a[i][j] == '1' && a[i][j - 1] == '0' && a[i][j + 1] == '0') cnt = 1;
        }
        if(cnt == 1) ans = "TRIANGLE";
    }
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
