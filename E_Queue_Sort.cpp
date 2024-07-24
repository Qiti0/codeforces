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
    int mn = 1e9;
    for(int i = 0; i < n; i ++) cin >> a[i],mn = min(mn,a[i]);
    int cnt = 1;
    int idx = 0;
    for(int i = 0;i < n;i ++)
    {
        if(a[i] == mn) 
        {
            idx = i;
            break;
        }
    }
    for(int i = n - 1;i >= 1;i --)
    {
        if(a[i] >= a[i - 1]) cnt ++;
        else break;
    }
    // cout << cnt << "\n";
    int ans = 0;
    if(n - cnt != idx) ans = -1;
    else ans = n - cnt;
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
