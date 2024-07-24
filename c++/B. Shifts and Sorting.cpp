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
   string s;cin >> s;
   s += '1';
   int len = s.length();
   ll cnt1 = 1ll;
   ll cnt0 = 0ll;
   ll ans = 0ll;
   for(int i = 0;i < len;i ++){
        if(s[i] == '1'){
            ans += cnt1 * cnt0;
            cnt1 ++;
            cnt0 = 0ll;
        }

        if(cnt1 >= 2ll && s[i] == '0'){
            cnt0 ++;
        }
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
