#include <bits/stdc++.h> 
using namespace std;
#define mod 1e9+7
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

ll f[N];
void solve()
{
    int n;cin >> n;
    f[0]=1,f[1]=1;
    for(int i=1;i<=n;i++)
    {
        f[i+1]=f[i]+f[i-1];
    }
    cout << f[n] << "\n";
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
