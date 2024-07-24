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
    string ans;
    ans += s.substr(6,9);
    // cout << s << "\n";
    ans += '-';
    ans += s.substr(0,2);
    ans += '-';
    // cout << s.substr(3,2) << "\n";
    ans += s.substr(3,2);
    cout << ans << "\n"; 
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
