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
    int len = s.size();
    for(int i = 0; i < len;i ++)
    {
        if(s[i] < s[len - i - 1])
        {
            cout << s << "\n";
            return;
        }else if(s[i] > s[len - i - 1])
        {
            string s1 = s;
            reverse(s.begin(),s.end());
            cout << s << s1 << '\n';
            return;
        }
    }
    cout << s << "\n";
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
