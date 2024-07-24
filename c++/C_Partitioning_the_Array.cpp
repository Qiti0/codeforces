#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;


void solve()
{
    int n;cin >> n;
    vector <int> a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            int flag=0;
            for(int j=0;j+i<n;j++)
            {
                flag=__gcd(flag,abs(a[j+i]-a[j]));
            }
            ans+=(flag!=1);
        }
    }
    cout << ans << '\n';
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
