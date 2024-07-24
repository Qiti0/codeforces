#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

int a[15][15];
int b[15][15];
map <int,int> mp;
void solve()
{
    int n,m;cin >> n >> m;
    mp.clear();
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < m;j ++){
            cin >> a[i][j];
        }
    }

    if(n == m && n == 1){
        cout << -1 << "\n";
        return;
    }
    if(m > 1){
        for(int i = 0;i < n;i ++){
            for(int j = 1;j < m;j ++){
                b[i][j] = a[i][j - 1];
            }
            b[i][0] = a[i][m - 1];
        }
    }else{
        for(int j = 0;j < m;j ++){
            for(int i = 1;i < n;i ++){
                b[i][j] = a[i - 1][j];
            }
            b[0][j] = a[n - 1][j];
        }
    }
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < m;j ++){
            cout << b[i][j] << " ";
        }
        cout << "\n";
    }
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
