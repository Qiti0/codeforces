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
    vector <int> a(n);
    for(int i = 0;i < n;i ++) cin >> a[i];
    // a[n] = 0;
    string ans = "YES";
    for(int i = 1;i + 1 < n;i ++)
    {
        a[i] -= 2 * abs(a[i - 1]);
        a[i + 1] -= abs(a[i - 1]);
        a[i - 1] -= abs(a[i - 1]); 
    }
    for(int i = 0;i < n;i ++)
    {
        // cout << a[i] << " ";
        if(a[i] != 0) ans = "NO";
        // cout << ans << "\n";
        // return;
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
