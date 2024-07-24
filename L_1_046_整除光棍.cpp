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
    ll x;cin >> x;
    ll i = 1ll;
    ll cnt = 10ll;
    ll idx = 1ll;
    while(i % x)
    {
        i += cnt;
        cnt *= 10;
        idx ++;
        // cout << i <<"\n";
        // if(idx > 10) break;
    }  
    cout << i / x << " " << idx << "\n"; 
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
