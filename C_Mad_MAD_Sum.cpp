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
    int n;cin >> n;
    vector <int> a(n);
    ll ans = 0,sum = 0;
    for(int i = 0;i < n;i ++) cin >> a[i],ans += a[i];
    int m = 10;
    while(m --){
        int mx = 0;
        sum = 0;
        mp.clear();
        for(int i = 0;i < n;i ++){
            mp[a[i]] ++;
            if(mp[a[i]] >= 2){
                mx = max(mx,a[i]);
            }
            if(mp[mx] >= 2){
                a[i] = mx;
            }else{
                a[i] = 0;
            }
            sum += a[i];
        }
        ans += sum;
    }
    mp.clear();
    for(int i = 0;i < n;i ++){
        mp[a[i]] ++;
    }
    for(auto it : mp) {
        if(it.second < 2) sum -= it.first;
    }
    for(int i = n - 1;i >= 0;i --){
        if(mp[a[i]] >= 2) ans += (sum -= a[i]);
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
