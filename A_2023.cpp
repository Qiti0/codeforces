#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;


void solve()
{
    int n,k;cin >> n >> k;
    ll p=1,m=2023;
    while(n--)
    {
        int x;cin >> x;
        p*=x;
    }
    int ans=0;
    if(m%p==0)
    {
        ans=m/p;
        cout <<"YES" << "\n";
        cout << ans << " ";
        k--;
        while(k--)
        {
            cout << 1 << " ";
        }
        cout << "\n";
    }else{
        cout << "NO" << "\n";
    }
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
