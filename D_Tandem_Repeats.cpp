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
    int len = (int)s.length();
    // len -= (len % 2 == 1);
    int res = 0,ans = 0,to = 0;
    for(int i = 1;i <= len / 2;i ++){
        res = 0;
        for(int j = 0;j < len - i;j ++){
            if(s[j] == s[j + i] || s[j] == '?' || s[j + i] == '?'){
                res ++;
            }else res = 0;
            if(res == i) ans = res;
        }
    }
    cout << 2 * ans << "\n";
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