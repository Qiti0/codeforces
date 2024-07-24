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
    vector <ll> a(n + 1);
    vector <ll> b(n + 1);
    for(int i = 1;i <= n; i ++) cin >> a[i], a[i] %= k;
    for(int i = 1;i <= n;i ++)
    {
        b[i] = (b[i - 1] + a[i]) % k;
    }
    int ans = 0;
    set <ll> st{0}; 
    for(int i = 1;i <= n;i ++)
    {
        if(st.count(b[i]))
        {
            st.clear();
            st.insert(b[i]);
            ans ++;
        }else st.insert(b[i]);
    }
    cout << ans <<"\n";
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
