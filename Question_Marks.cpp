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
    int n;cin >> n;
    string s;cin >> s;
    int a = 0,b = 0,c = 0,d = 0;
    for(int i = 0;i < s.length();i ++){
        a += (s[i] == 'A');
        b += (s[i] == 'B');
        c += (s[i] == 'C');
        d += (s[i] == 'D');
    }
    int ans = 0;
    ans += min(a,n);
    ans += min(b,n);
    ans += min(c,n);
    ans += min(d,n);
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
