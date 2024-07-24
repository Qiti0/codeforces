#include <bits/stdc++.h>
using namespace std;
const double pi = acos(-1);
const int N = 60;
typedef long long ll;

int a[N][N];
void slove()
{
    int n,m;cin >> n >> m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        {
            cin >> a[i][j];
        }
        int ans=1e9+10,sum=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            for(int k=1;k<=n;k++)
            {
                for(int l=1;l<=m;l++)
                {
                    sum+=a[k][l]*(abs(i-k)+abs(j-l));
                }
            }
            ans=min(ans,sum);
            sum=0;
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
        slove();
    }
    return 0;
}