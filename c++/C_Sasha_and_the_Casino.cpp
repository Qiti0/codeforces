#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 1e9 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

int bsearch(int res,ll sum ,ll k)
{
    int l = res,r = 1e9,mid = 0;
    while(l < r)
    {
        mid = (l + r) / 2;
        if(mid <= sum / (k - 1)) l = mid + 1;
        else r = mid;
    }
    return r;
}
void solve()
{
    ll k,x,a;cin >> k >> x >> a;
    ll sum = 0ll;
    ll res = 1ll;
    int idx = 0;
    string ans;
    for(int i = 1; i <= x;i ++)
    {
        // while(sum >= (res * (k - 1ll))) res ++;
        res = bsearch(res,sum,k);
        sum += res; 
        idx = i;
        if(sum > a) break;
        // cout << res << " " << sum << "\n";
    }
    // cout << idx << "\n";
    if(idx == x)
    {
       if((a - sum) * (k - 1) <= sum) ans = "NO";
       else ans = "YES";
    }else{
        ans = "NO";
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
