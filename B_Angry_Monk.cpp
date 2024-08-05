#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

map <int,int> mp;
void solve()
{
    mp.clear();
    int n,k;cin >> n >> k;
    vector <int> a(k);
    for(int i = 0;i < k;i ++) cin >> a[i];  
    int mx = *max_element(a.begin(),a.end());
    ll ans = 0ll;
    for(int i = 0;i < k;i ++){
        if(a[i] == mx){
            mp[a[i]] ++;
            if(mp[a[i]] >= 2){
                ans += a[i] - 1;
            }
        }else{
            if(a[i] != 1){
                ans += a[i] - 1;
            }
        }
        // cout << ans << "\n";
    }
    ans += n - mx;
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
