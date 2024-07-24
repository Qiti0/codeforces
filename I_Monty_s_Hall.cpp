#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;


void solve()
{
    int d,s,e;cin >> d >> s >> e;
    double se=1.0*s/d,nse=1.0*(d-s)/d;
    double ans; 
        ans=nse*min(s,d-s-e)/(d-s-e);
        // cout << ans << "\n";
        if(s>(d-s-e))
        {
            ans+=1.0*s/d*1.0*(s-(d-s-e))/s;
        }
    printf("%.12lf\n",ans);
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
