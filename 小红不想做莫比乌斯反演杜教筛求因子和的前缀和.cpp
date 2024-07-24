#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 3010;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

int K(int i,int j,int x){
    return (x - i * j) / (2 * (i + j));
}
void solve()
{
    int ans = 0;
    int n,m,p,x;cin >> n >> m >> p >> x;
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= m;j ++){
            int k = 0;
            if(i * j < x && (x - i * j) % (2 * (i + j)) == 0) k = K(i,j,x);
            // cout  << i << " " << j << " " << k << "\n";
            if(k > 0 && k <= p) ans ++;
        }
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
