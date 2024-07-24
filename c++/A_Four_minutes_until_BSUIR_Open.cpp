#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int x[N],v[N];
int main()
{

    int n,a,b;cin >> n >> a >> b;
    double vx=0;
    double ans=0;
    for(int i=1;i<=n;i++)
    {
        cin >> x[i] >> v[i];
    }
    for(int i=1;i<=n;i++)
    {
        vx=sqrt(((2*a*b*(x[i]-x[i-1])+a*(v[i]<<1))+b*(v[i-1]<<1))/(a+b));
        cout << vx << " ";
        ans+=(abs(vx-v[i-1])/a)+(abs(vx-v[i])/b);
        cout << ans<< "\n";
    }
    printf("%.10lf\n",ans);
    return 0;
}