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
    double p;cin >> p;
    double q = 1 - p;
    double ans = 0;
    ans = (p * p * q * q * q +q * q * p * p * p);
    printf("%.6lf",ans);
}
int main()
{
    // std::ios::sync_with_stdio(false);
    // std::cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
