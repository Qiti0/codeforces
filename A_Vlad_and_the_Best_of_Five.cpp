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
    int cnta = 0,cntb = 0;
    for(int i = 0;i < (int)s.size();i ++)
    {
        if(s[i] == 'A') cnta ++;
        else cntb ++;
    }
    if(cnta > cntb) cout << "A" << "\n";
    else cout << "B" << "\n"; 
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