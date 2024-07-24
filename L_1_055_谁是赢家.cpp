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
    int a,b;cin >> a >> b;
    int p1,p2,p3;cin >> p1 >> p2 >> p3;
    int ans = 0;
    char win;
    if(a > b)
    {
        if(!p1 || !p2 || !p3)
        {
            ans += (p1 == 0) +(p2 == 0) + (p3 == 0) ;
            win = 'a';
        }else {
            ans = 3;
            win = 'b';
        }
    }else {
        if(p1 || p2 || p3)
        {
            ans = p1 + p2 + p3;
            win = 'b';
        }else {
            win = 'a';
            ans = 3;
        }
    }
    int winner;
    if(win == 'a') winner = a;
    else winner = b;
    cout << "The winner is " << win << ": " << winner << " + " << ans << "\n"; 
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
