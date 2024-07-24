#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

ll a[N];
ll b[64];
map<ll,int> mp;
void slove()
{
    int n;cin >> n;
    mp.clear();
    int odd=0,even=0;
    for(ll i=0;i<n;i++)
    {
        cin >> a[i];
        if(a[i]&1ll) odd=1;
        else even=1;
    }
    if(even&&odd) cout << 2 << '\n';
    else 
    {
        ll ans=0;
        for(ll j=2;j<63;j++)
        {
            int cnt=0;
            mp.clear();
            for(ll i=0;i<n;i++)
            {
            if(!mp[a[i]%b[j]]) cnt++,mp[a[i]%b[j]]++;
            if(cnt>=3) break;
            } 
            if(cnt==2)
            {
                ans=b[j];
                break;
            }
        }
        cout << ans << '\n';  
    }
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t = 1;
    cin >> t;
    for(ll i=2;i<63ll;i++)
    {

        b[i]=1ll<<i;
    }
    // for(ll i=2;i<63ll;i++) cout << b[i] << "\n";
    while (t--)
    {
        slove();
    }
    return 0;
}
