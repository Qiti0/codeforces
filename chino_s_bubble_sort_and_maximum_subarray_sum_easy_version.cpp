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
    int n,k;cin >> n >> k;
    vector <int> a(n);
    for(int i = 0;i < n;i ++) cin >> a[i];
    int ans = 0;
    int res = 0;
    int z = 0,f = 0;
    for(int i = 0;i < n;i ++)
    {
        if(a[i] > 0) z += a[i];
        else{
            f += a[i];
            res = z;
            ans = max(res,ans);
            z = 0;
            
        }
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
