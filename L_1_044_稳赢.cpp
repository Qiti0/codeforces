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
    int k;cin >> k;
    int cnt = 0;
    string s;
    while(cin >> s && s != "End")
    {
        if(cnt == k)
        {
            cnt = 0;
            cout << s << "\n";
            continue;
        }
        cnt ++;
        // cout << cnt << "\n";
        if(s == "ChuiZi")
        {
            cout << "Bu" << "\n";
        }else if(s == "JianDao")
        {
            cout << "ChuiZi" << "\n";
        }else {
            cout << "JianDao" << "\n";
        }
    }
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
