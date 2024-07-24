#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

int a[2][N];
void slove()
{
    int n;cin >>n;
    int x0=1;
    a[0][1]=2*n;
    a[1][n]=2*n-1;
    for(int i=2;i<=n;i+=2)
    {
        a[1][i-1]=x0;
        x0++;
        a[0][i]=x0;
        x0++;
    }
    for(int i=3;i<=n;i+=2)
    {
        a[1][i-1]=x0;
        x0++;
        a[0][i]=x0;
        x0++;
    }   
    for(int i=0;i<2;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout << a[i][j] << " ";
        }
        cout << '\n';
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
        slove();
    }
    return 0;
}
