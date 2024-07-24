#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}


map <ll,ll> mp;
void solve()
{
    mp.clear();
    ll n,m;cin >> n >> m;
    vector <ll> a(n);
    vector <ll> res;
    for(ll i = 0ll;i < n;i ++) cin >> a[i],mp[a[i]] ++;
    for(ll i = 0ll;i < n;i ++){
        ll c = m % a[i];
        ll d = m / a[i];
        // cout << a[i] << " " << mp[a[i]] <<" "  << mp[a[i] + 1] << " " << d << " " << c << "\n";
        if(d){
            if(mp[a[i] + 1] >= c && mp[a[i]] >= d - c){
                res.push_back(m);
            }else{
                if(!c){
                    if(mp[a[i]] >= d){
                        res.push_back(a[i] * mp[a[i]]);
                    }else{
                        if(d - min(c,mp[a[i] + 1]) >= 0) res.push_back(a[i] * mp[a[i]] + (a[i] + 1) * min(mp[a[i] + 1],(m - a[i] * mp[a[i]]) / (a[i] + 1ll)));
                    }
                }else{
                    if(d - min(c,mp[a[i] + 1]) >= 0) res.push_back(a[i] * min(mp[a[i]],d - min(c,mp[a[i] + 1])) + (a[i] + 1) * min(mp[a[i] + 1],c));
                }
            }
            // cout << *(res.end() - 1) << "\n";
            // cout << "\n";
        }else {
            res.push_back(0ll);
        }
    }
    // for(auto &it : res) cout << it << "\n";
    cout << *max_element(res.begin(),res.end()) << "\n";
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
