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
    int n;cin >> n;
    mp.clear();
    for(int i = 0;i < n;i ++){
        int x;cin >> x;
        mp[x] ++;
    }
    int ans = 0;
    for(auto it: mp){
        ans += (it.second / 3);
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