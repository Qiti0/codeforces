#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

char g[510][510];
void solve()
{
    int n,m;cin >> n >> m;
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= m;j ++){
            cin >> g[i][j];
        }
    }

    int bxl = 510,bxr = 0,wyl = 510,wyr = 0,byl = 510,byr = 0,wxl = 510,wxr = 0;
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= m;j ++){
            if(g[i][j] == 'B'){
                bxl = min(bxl,i);
                bxr = max(bxr,i);
                byl = min(byl,j);
                byr = max(byr,j);
            }else{
                wxl = min(wxl,i);
                wxr = max(wxr,i);
                wyl = min(wyl,j);
                wyr = max(wyr,j);
            }
        }
    }

    if((bxl == 1 && bxr == n && byl == 1 && byr == m) ||
    (wxl == 1 && wxr == n && wyl == 1 && wyr == m)){
        cout << "YES" << "\n";
        return;
    }
    cout << "NO" << "\n";
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
