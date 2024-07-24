#include <bits/stdc++.h>
using namespace std;
const double pi =acos(-1);
const int N =1e5+10;
typedef long long ll;

int a[5],b[N];
string slove()
{
    int n;cin >> n;
    for(int i=1;i<=n;i++) cin >> b[i];
    int ant=0;
    for(int i=n-1;i>=1;i--)
    {
        cout << ant << " ";
        if(b[i]<ant) return "NO";
        for(int j=0;j<=4;j++)
        {
            int flag=0;
            if(i==a[j]&&b[i]>b[i+1])
            {
                flag=1;
                ant+=(b[i]-b[i+1]);
                // b[i]=b[i+1];
            }
             if(!flag&&i!=a[j]&&b[i]>b[i+1]) return "NO";
        }
    }
    return "YES";
    // cout << "\n";
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t=1;
    cin >> t;
    for(int i=0;i<=4;i++)
    {
        a[i]=1<<i;
    }
    // for(int i=0;i<=4;i++) cout << a[i] << " ";
    while(t--)
    {
       cout << slove() <<"\n" ;
    }
    return 0;
}