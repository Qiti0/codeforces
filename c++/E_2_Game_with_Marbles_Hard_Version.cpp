#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

int a[N],b[N];
struct node 
{
    int i,value;
};
node c[N];
bool cmp(node x,node y)
{
    return x.value>y.value;
}
void slove()
{
    int n;cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++)
    {
        cin >> b[i];
        c[i].value=a[i]+b[i];
        c[i].i=i;
    }
    sort(c,c+n,cmp);
    ll ans=0;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(cnt^=1) ans+=a[c[i].i]-1;
        else ans-=b[c[i].i]-1;
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
        slove();
    }
    return 0;
}
