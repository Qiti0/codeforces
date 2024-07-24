#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

map <char,int> mp;
void solve()
{
    int n;cin >> n;
    string s;cin >> s;
    mp.clear();
    for(int i = 0;i < n;i ++)
    {
        mp[s[i]] ++;
    }
    int sum = 0;
    int mx = 0;
    for(auto it : mp)
    {
        sum += it.second;
        mx = max(mx, it.second);
    }
    int ans = n % 2 == 1;
    ans = max(ans,2 * mx - sum);
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
