#include <bits/stdc++.h> 
using namespace std;
const int mod = 80112002;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}


void solve()
{
    int n,m;cin >> n >> m;
    vector <int> a(m),b(m);
    for(int i = 0;i < m;i ++){
        cin >> a[i] >> b[i];
    }
    vector <int> f(n);
    for(int i = 0;i < m;i ++){
        f[b[i]] = f[a[i]] + 1;
    }
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
