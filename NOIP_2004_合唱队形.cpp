#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

int a[N],l[N],r[N];
void solve()
{
    int n;cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++)
        for(int j=0;j<i;j++)
        {
            if(a[i]>a[j]) l[i]=max(l[i],l[j]+1);
        }
    for(int i=n-1;i>=0;i--)
        for(int j=n-1;j>i;j--)
        {
            if(a[j]<a[i]) r[i]=max(r[i],r[j]+1);
        }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=max(ans,l[i]+r[i]+1);
        // cout << l[i] << " " << r[i] << "\n";
    } 
    ans=n-ans;
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
