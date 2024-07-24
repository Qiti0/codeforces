#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

int a[N],sum[N];
void solve()
{
    int n,k,x;cin >> n >> k >> x;
    int K=k;
    for(int i=1;i<=n;i++) cin >> a[i];

    sort(a+1,a+n+1,greater<int>());
    for(int i=1;i<=n;i++)
    {
        sum[i]=sum[i-1]+a[i];
    }
    int ans=-2e9;
    // cout << ans << "\n";
        int l=1,r=x;
        while(k>=0&&r<=n)
        {
            int of=sum[r]-sum[l-1];
            int oz=sum[n]-sum[r];
            ans=max(ans,oz-of);
            l++;
            r++;
            k--;
        }
        ans=max(ans,sum[K]-sum[n]);
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
        solve();
    }
    return 0;
}
