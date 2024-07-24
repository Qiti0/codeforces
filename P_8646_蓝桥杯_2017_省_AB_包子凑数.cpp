#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

int a[N];
int f[N];
void solve()
{
    int n;cin >> n;
    int sum = 0;
    int Gcd = 0;
    for(int i = 0;i < n;i ++)
    { 
        cin >> a[i];
        f[a[i]] = 1;
        sum += a[i];
        Gcd = gcd(Gcd , a[i]);
    }
    // f[0] = 1;
    // cout << Gcd << "\n";
    if(Gcd == 1)
    {
        for(int i = 0;i < n;i ++)
        {
            for(int j = a[i];j <= 2 * sum;j ++)
            {
                f[j] = max(f[j] , f[j - a[i]]);      
            }
        }
        int ans = 0;
        for(int j = 1;j <= 2 * sum;j ++)
        {
            // cout << f[j] << "\n";
            if(!f[j]) ans ++;       
        }
        cout << ans << "\n";
    }else{
        cout << "INF" << "\n";
        return;
    }
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
