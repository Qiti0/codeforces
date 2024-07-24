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
    for(int i = 0;i < n;i ++) cin >> a[i],a[i] %= 3;
    int cnt1 = 0,cnt2 = 0;
    for(int i = 0;i < n;i ++)
    {
        if(a[i] == 1) cnt1 ++;
        else if(a[i] == 2)cnt2 ++;
    }
    int ans = 0;
    cnt2 %= 3;
    if(cnt2 > cnt1)
    {
        ans = (cnt2 - cnt1) % 3;
    }else if(cnt1 > cnt2)
    {
        ans = (cnt1 - cnt2) % 3;
        ans = min(ans, 1);
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
