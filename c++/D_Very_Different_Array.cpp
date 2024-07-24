#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

ll a[N],b[N];
void solve()
{
    int n,m;cin >> n >> m;
    for(int i=0;i<n;i++) cin >> a[i];
    for(int j=0;j<m;j++) cin >> b[j];
    sort(a,a+n);
    sort(b,b+m,greater<ll>());
    // for(int i=0;i<m;i++) cout << b[i] << " ";
    int l=0,r=m-1,t=0,p=n-1;
    ll ans=0;
    while(l<=r&&t<=p)
    {
        if(max(abs(a[t]-b[l]),abs(a[t]-b[r]))>max(abs(a[p]-b[l]),abs(a[p]-b[r])))
        {
            if(abs(a[t]-b[l])>abs(a[t]-b[r]))
            {
                ans+=abs(a[t]-b[l]);
                l++;
                t++;
                // cout << ans << "tl\n";
            }else{
                ans+=abs(a[t]-b[r]);
                r--;
                t++;
                // cout << ans << "tr\n";
            }
        }else{
            if(abs(a[p]-b[l])>abs(a[p]-b[r]))
            {
                ans+=abs(a[p]-b[l]);
                l++;
                p--;
                // cout << ans << "pl\n";
            }else{
                ans+=(abs(a[p]-b[r]));
                r--;
                p--;
                // cout << ans << "pr\n";
            }
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
        solve();
    }
    return 0;
}
