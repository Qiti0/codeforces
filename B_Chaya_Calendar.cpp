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
    int n;cin >> n;
    vector <int> a(n);
    for(int i = 0;i < n;i ++) cin >> a[i];
    int ans = a[0];
    for(int i = 0;i + 1 < n;i ++)
    {
        if(ans >= a[i + 1])
        {
            int res = 1;
            while(a[i + 1] * res <= ans)
            {
                res ++;
            }
            ans = res * a[i + 1];
        }else{
            ans = a[i + 1];
        }
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
        solve();
    }
    return 0;
}
