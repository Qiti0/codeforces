#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 1e5 + 10;
typedef long long ll;
typedef pair<ll,ll> pii;

pii a[N];
ll s[N];
int ans[N],cnt[N];
void slove()
{
    int n;cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i].first;
        a[i].second=i;
        cnt[i]=0;
    }
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++)
    {
        s[i]=s[i-1]+a[i].first;
    }
    cnt[n+1]=0;
    for(int i=n;i>=1;i--)
    {
        if(s[i]>=a[i+1].first)
        {
            cnt[i]=cnt[i+1]+1;
            ans[a[i].second]=i-1+cnt[i+1];
        }else{
            cnt[i]=1;
            ans[a[i].second]=i-1;
        }
    }
    for(int i=1;i<=n;i++) cout << ans[i] << " ";
    cout << "\n";
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
