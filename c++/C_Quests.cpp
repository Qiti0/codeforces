#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

ll a[N],b[N];
void slove()
{
    int n,k;cin >> n >> k;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    for(int i=1;i<=n;i++) cin >> b[i];
    ll ans=0;
    ll value=0;
    ll sum=0;
    for(int i=1;i<=min(n,k);i++)
    {
        sum+=a[i];
        value=max(value,b[i]);
        ans=max(ans,(sum+value*(k-i)));
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
        slove();
    }
    return 0;
}
