#include <bits/stdc++.h>
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,ll> pii;

int a[N];
pii xs[N];
bool cmp(pii x,pii y)
{
    if(x.first==y.first) return x.second<y.second;
    return x.first>y.first;    
}
void slove()
{
    int m,n,k;cin >> m >> n >> k;
    int ans=1;
    for(int j=0;j<m;j++)
    {
        xs[j]={0,0};
        ll sum=0;
        for(int i=1;i<=n;i++)
        {
            cin >> a[i];
        }
        sort(a+1,a+n+1);
        ll now=0;
        for(int i=1;i<=n;i++)
        {
            now+=a[i];
            if(now<=k) sum+=now;
            else break;
            xs[j].first++;
        }
        xs[j].second=sum;
        // cout << xs[j].first <<" " << xs[j].second <<"\n";
        if(xs[0].first<xs[j].first) ans++;
        else if(xs[0].first==xs[j].first)
        {
            if(xs[0].second>xs[j].second) ans++;
        }
    }
    cout << ans << '\n';    
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