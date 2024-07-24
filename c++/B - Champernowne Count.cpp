#include <bits/stdc++.h>
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;

void slove()
{
    ll n,k;cin >> n >>k;
    ll chu=0,ans=0;
    for(ll i=1;i<=n;i++)
    {
        ll t=i;
        while(t)
        {
            t/=10;
            chu*=10;
        }
        chu+=i;
        if(chu>=k) chu%=k;
        if(chu==0) ans++;
    }
    cout << ans << '\n';
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