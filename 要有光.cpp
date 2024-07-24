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
    double c,d,h,w;cin >> c >> d >> h >> w;
    double ans;
    double p = 1.0 * (d - h) / d;
    double l = w / p; 
    double hi = min(2 * c,c / p);
    ans = l * hi * (1 - p * p);
    cout << ans << "\n";
}
int main()
{
    // std::ios::sync_with_stdio(false);
    // std::cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
