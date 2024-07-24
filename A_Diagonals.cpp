#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

map <int,int,greater<int> > mp;
void solve()
{
    mp.clear();
    int n,k;cin >> n >> k;
    int ans = 0;
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= n;j ++){
            mp[i + j] ++;
        }
    }

    vector <int> w;
    for(auto it : mp){
        w.push_back(it.second);
    }
    if(k == 0){
        cout << 0 << "\n";
        return;
    }
    sort(w.begin(),w.end(),greater());
    for(auto &it : w){
        k -= it;
        // cout << it << "\n";
        ans ++;
        if(k <= 0) break;
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