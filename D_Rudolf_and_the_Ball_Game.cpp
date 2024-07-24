#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}


void solve()
{
    int n,m,x;cin >> n >> m >> x;
    vector <int> f(n + 1);
    f[x] = 1;
    while(m --)
    {
        int r;char c;cin >> r >> c;
        vector <int> g(n + 1);
        for(int i = 1;i <= n;i ++)
        {
            if(c == '?' || c == '1'){
                if(f[i]){
                    int idx = (i + n - r) % n;
                    if(!idx) idx = n;
                    g[idx] = 1;
                }
            }
            if(c == '?' || c == '0'){
                if(f[i]){
                    int idx = (i + r) % n;
                    if(!idx) idx = n;
                    g[idx] = 1;
                }
            }
        }
        f = g;
    }
    int ans = count(f.begin(),f.end(),1);
    cout << ans << "\n";
    for(int i = 1;i <= n;i ++){
        if(f[i]){
            cout << i << " ";
        }
    }
    cout << "\n";
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
