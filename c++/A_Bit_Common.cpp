#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

int cl[5010][5010];

ll q;
ll qpow(ll a, ll b){
    ll res = 1ll % q;
    while(b){
        if(b & 1) res = ((res % q) * (a % q)) % q;
        a = a * a % q;
        b >>= 1; 
    }
    return res % q;
}
void solve()
{
    int n,m;cin >> n >> m >> q;
    for(int i = 0; i < 5010;i ++){
        cl[i][0] = 1;
        cl[i][i] = 1;
    }
    for(int i = 1;i < 5010;i ++)  
    {
        for(int j = 1;j <= i;j ++)
        {
            cl[i][j] = (cl[i - 1][j] % q + cl[i - 1][j - 1] %  q) % q;
            // cout << cl[i][j] << " ";
        }
        // cout << "\n";
    }

    ll ans = 0ll;

    for(int i = 1;i <= n;i ++){
        // cout << i << " "<<cl[n][i] << "\n";
        ans += (cl[n][i] * (qpow((qpow(2ll,i) - 1ll) % q,m - 1ll) % q) * (qpow(qpow(2ll,n - i) % q,m - 1ll) % q)) % q;
        ans %= q;
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
        solve();
    }
    return 0;
}
