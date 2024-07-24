#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

ll a[N],r[N],l[N]; 
void solve()
{
    // freopen("010-almost_same-1.in","r",stdin);
	// freopen("out.txt","w",stdout);
    int n;cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    ll ans=0ll;
    for(int i=1;i<n;i++)
    {
        ll R=a[i];
        ll rr=R;
        while(i<n&&rr==a[i+1]) i++;
        int flag=i;
        while(i<n-1&&R>=a[i+1])
        {
            i++; 
            R=a[i];
            // r[i]=a[i]-a[i+1];
        }
        r[flag]=rr-a[i];    
    }
    for(int i=n-2;i>=0;i--)
    {
        ll L=a[i];
        ll ll=L;
        int flag=i;
        // while(i>0&&ll==a[i]) i--;
        while(i>0&&L>=a[i-1])
        {
            i--;
            L=a[i];
            // l[i]=a[i]-a[i-1];
            // cout <<i<<"&"<< L << " ";
        }
        // cout << "\n";
        l[flag]=ll-a[i];
    }
    for(int i=1;i<n;i++)
    {
        // cout <<i <<" "<< l[i] << " "<< r[i]<<"\n";
        ans=max(ans,min(l[i],r[i]));
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
        solve();
    }
    return 0;
}
