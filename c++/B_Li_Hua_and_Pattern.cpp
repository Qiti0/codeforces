#include <bits/stdc++.h>
using namespace std;
const double pi = acos(-1);
const int N = 1010;
typedef long long ll;

char a[N][N];
void slove()
{
    int n,k;cin >> n >> k;
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(a[i][j]!=a[n+1-i][n+1-j]) cnt++;
        }
    }
    cnt/=2;
    // cout << cnt << "\n";
    // cout << ceil(1.0*n/2) << "\n";
    if(cnt<=k)
    {
        if(n%2) cout << "YES" <<"\n";
        else if((k-cnt)%2==0) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
    else cout << "NO" << "\n";
}
int main()
{
    // std::ios::sync_with_stdio(false);
    // std::cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--)
    {
        slove();
    }
    return 0;
}