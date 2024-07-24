#include <bits/stdc++.h>
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

int a[N];
void slove()
{
    int n;cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    ll ans=-2;
    for(int k=1;k<=n;k++)
    {
        if(n%k==0)
        {
            ll mn=1e18,mx=-1e18;
            for(int i=0;i<n;i+=k)
            {
                ll sum=0;
                for(int j=i;j<i+k;j++)
                {
                    sum+=a[j];
                }
                mx=max(mx,sum);
                mn=min(sum,mn);
            }
            ans=max(ans,mx-mn);
        }
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