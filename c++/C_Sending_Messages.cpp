#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

ll m[N];
void solve()
{
    ll n,f,a,b;cin >> n >> f >> a >> b;
    for(int i=1;i<=n;i++)
    {
        cin >> m[i];
    }
    for(int i=1;i<=n;i++)
    {
        ll charge=min(a*(m[i]-m[i-1]),b);
        f-=charge;
    }
    if(f<=0) cout << "NO" << "\n";
    else cout << "YES" << "\n";
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
