#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

#define int ll
map <int,int> mp;
void solve()
{
    int n,m,k;cin >> n >> m >> k;
    mp.clear();
    vector <int> a(n),d(m),f(k);
    for(int i = 0;i < n;i ++) cin >> a[i];
    for(int i = 0;i < m;i ++) cin >> d[i];
    for(int i = 0;i < k;i ++) cin >> f[i];
    int l  = 0, r = 0 , old = 0 ,ans = 0,mx = 0;
    for(int i = 1;i < n;i ++){
        int now = a[i] - a[i - 1];
        mp[now] ++;
        if(now > old){
            l = i - 1;
            r = i;
            old = now;
            ans = old;
            mx = old;
        }
    }
    // cout << l << " " << r << "\n";
    // cout << res << "&\n";
    int mid = (a[l] + a[r]) / 2;
    int cnt1 = 0,cnt2 = 0;
    sort(f.begin(),f.end());
    for(int i = 0;i < m;i ++){
        int c = mid - d[i];
        int idx = upper_bound(f.begin(),f.end(),c) - f.begin();
        if(idx >= k) idx --;
        int idx2 = idx - 1;
        if(idx2 < 0) idx2 = 0;
        // cout << mid << " " << d[i] << " "<< f[idx] <<" " << f[idx2]<< "\n";
        cnt1 = max(f[idx] + d[i] - a[l],a[r] - f[idx] - d[i]);
        cnt2 = max(f[idx2] + d[i] - a[l],a[r] - f[idx2] - d[i]);
        ans = min({ans,cnt1,cnt2});  
    }
    mp[mx] --;
    for(auto it : mp){
        if(it.second){
            ans = max(ans,it.first);
        }
    }
    cout << ans << "\n";
}
signed main()
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
