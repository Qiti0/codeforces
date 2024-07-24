#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 20;
typedef long long ll;
typedef pair<int,int> pii;

ll a[N];
ll b[600];
int cnt=0;
int n;
void slove()
{
    ll num=0;
    for(int i=1;i<=14;i++)
    {
        num*=10;
        num++;
        a[i]=num;
    }
    // for(int i=1;i<=14;i++) cout << a[i] << " ";
    cin >>n;
    for(int i=1;i<=14;i++)
    {
        for(int j=i;j<=14;j++)
        {
            for(int k=j;k<=14;k++)
            {
                b[cnt++]=a[i]+a[j]+a[k];
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
        slove();
    sort(b,b+cnt);
    cout << b[n-1] << "\n";
    }
    return 0;
}
