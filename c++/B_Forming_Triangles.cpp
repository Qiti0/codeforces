#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1.0);
const int N = 3e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

int a[N];
ll f3(ll x)
{
    return (x-2ll)*(x-1ll)*x/6ll;
}
ll f2(ll x)
{
    return (x-1ll)*x/2ll;
}
map<int,int> mp;
void solve()
{
    int n;cin >> n;
    mp.clear();
    memset(a,-1,sizeof(a));
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    sort(a,a+n);
    ll ans=0;
    int flag=0;
    for(int i=0;i<n;i++)
    {
       while(a[i]==a[i+1])
       {
            i++;
       }
       ans+=f3(mp[a[i]]);
    //    cout << ans << "\n";
       ans+=f2(mp[a[i+1]])*(i+1);
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
