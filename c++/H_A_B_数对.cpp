#include <bits/stdc++.h>
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

ll a[N];
map<int,ll> mp;
void slove()
{
    int n,m;cin >> n >> m;
    ll ans=0;
    for(int i=0;i<n;i++) 
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        a[i]+=m;
        if(mp[a[i]])
        {
            ans+=mp[a[i]];
        } 
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
        slove();
    }
    return 0;
}