#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 1e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

struct node
{
    int i,l,r;
};
int a[N];
node b[N];
ll suml[N];
void slove()
{
    int n;cin >> n;
    int cnt=0;
    ll ans=0;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
        if(a[i]==1)
        {
            b[++cnt].i=i;
        }
    }
    cnt++;
    b[cnt].i=n+1;
    for(int i=1;i<cnt;i++){
        b[i].l=b[i].i-b[i-1].i-1;
        b[i].r=b[i+1].i-b[i].i-1;
        ans+=b[i].l+b[i].r+(b[i].l*b[i].r)+1;
    }
    suml[1]=b[1].l;
    for(int i=3;i<cnt;i+=2)
    {
        suml[i]=suml[i-2]+b[i].l;
    }
    for(int i=2;i<cnt;i+=2)
    {
        suml[i]=suml[i-2]+b[i].l;
    }
    // for(int i=2;i<cnt;i+=2)
    // {
    //     cout << suml[i] << " ";
    // }
    // cout << "\n";
    for(int i=3;i<cnt;i+=2)
    {
        if(i>cnt) break;
        ans+=(b[i].r+1)*(suml[i-2]+(i-1)/2);
    }
    for(int i=4;i<cnt;i+=2)
    {
        if(i>cnt) break;
        ans+=(b[i].r+1)*(suml[i-2]+(i-2)/2);
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
