#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

int a[10][10];
void slove()
{
    int n;cin >> n;
    memset(a,-1,sizeof(a));
    string ans = "Yes";
    while(n --)
    {
        int x,y,z;cin >> x >> y >> z;
        if(x == y && z != 0) 
        {
            ans = "No";
        }
        if(x != y)
        {
            if(a[x][y] == -1)
            {
                a[x][y] = z;
                if(z == 1) a[y][x] = 0;
            }
            else{
                if(a[x][y] != z) 
                {
                    ans = "No";
                }
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
    cin >> t;
    while (t--)
    {
        // solve();
        slove();
    }
    return 0;
}
