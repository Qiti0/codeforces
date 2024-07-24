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
    int x;cin >> x;
    int ans = 0;
    int mx = 0;
    for(int i = 1;i < x;i ++){
        int g = gcd(i,x) + i;
        // cout << g << " " << i << "\n";
        if(g > mx){
            ans = i;
            mx = g;
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
