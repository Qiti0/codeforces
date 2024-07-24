#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

int w[15]={1,2,4,10,20,40,100,200,400,1000,2000};
ll f[N];
void solve()
{
    double n;
    while(cin >> n)
    {
        if(n < 0.01) break;
        memset(f , 0 , sizeof(f));
        int m = (int)((n + 0.01) / 0.05);
        // cout << m << '\n';
        f[0] = 1;
        for(int i = 0;i < 11;i ++)
        {
            for(int j = w[i];j <= m;j ++)
            {
                f[j] += f[j - w[i]];
            }
        }
        printf("%6.2lf%17lld\n",n,f[m]);
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
