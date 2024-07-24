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
    int ans = 0;
    while(n --)
    {
        int a,b,c;cin >> a >> b >> c;
        ans = 0;
        if(a == 150)
        {
            ans += 1;
        }else if(a == 200)
        {
            ans += 2;
        }
        if(b > 32 && b <= 40)
        {
            ans += 1;
        }else if (b == 45)
        {
            ans += 2;
        }  
         if(c > 32 && c <= 40)
        {
            ans += 1;
        }else if (c == 45)
        {
            ans += 2;
        }    
        cout << ans << "\n";
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
