#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

vector <int> ve;
void solve()
{
    int n;cin >> n;
    ve.clear();
    int l=0,r=2147483247;
    for(int i=0;i<n;i++)
    {
        int a,b;cin >> a >> b;
        if(a==1)
        {
            l=max(l,b);
        }else if(a==2)
        {
            r=min(r,b);
        }else{
           ve.push_back(b);
        }
    }
    int ans=r-l+1;
    // cout << l << " " << r << "\n";
    for(auto it:ve)
    {
        if(it>=l&&it<=r) ans--;
    }
    ans=max(ans,0);
    cout << ans << "\n";
}
int main()
{
    // std::ios::sync_with_stdio(false);
    // std::cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
