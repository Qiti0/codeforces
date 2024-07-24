#include <bits/stdc++.h>
using namespace std;
const double pi =acos(-1);
const int N =1e3+10;
typedef long long ll;

int a[N];
struct xy
{
    int x,y;
}xy[N];
void slove()
{
    int n;cin >> n;
    for(int i=1;i<=2*n;i++) cin >> a[i];
    sort(a+1,a+2*n+1);
    int ans=0,m=0;
    for(int i=1,j=1;i<=n;i++,j++)
    {
        xy[j].x=a[i],xy[j].y=a[i+n];
        m++;
    }
    for(int i=1;i+1<=m;i++)
    {
        ans+=(xy[i+1].x-xy[i].x)+(xy[i+1].y-xy[i].y);
    }
    cout << ans << "\n";
    for(int i=1;i<=m;i++) cout << xy[i].x << " " <<xy[i].y << "\n";
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--)
    {
        slove();
    }
    return 0;
}