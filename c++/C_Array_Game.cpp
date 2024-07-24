#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

ll a[N];
map <ll,ll> mp;
set <ll> b;
void solve()
{
    int n,k;cin >> n >> k;
    mp.clear();
    ll ans=(1ll<<62ll);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        mp[a[i]]++;
        ans=min(ans,a[i]);
    }
    if(k>=3)
    {
        ans=0;
    }else{
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(i!=j)
                {
                    b.insert(abs(a[i]-a[j]));
                    if(mp[abs(a[i]-a[j])]) mp[abs(a[i]-a[j])]++;
                    ans=min(ans,abs(a[i]-a[j]));
                }
            }
        }
        if(k==2)
        {
            for(auto it:b)
            {
                for(int i=0;i<n;i++)
                {
                    ans=min(ans,abs(it-a[i]));
                }
            }
            for(auto it:mp)
            {
                if(it.second>=2) ans=0ll;
                // cout <<it.first<<"&"<<it.second << " ";
            }
        }
        
    }
    cout << ans << endl;
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
