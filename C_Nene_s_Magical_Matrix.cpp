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
    int c = 1,k = 0;
    vector <int> a(n + 1);
    for(int i = 1;i <= n;i ++) a[i] = i;
    int s = n * (3 * n - 1) / 2,m = 2 * n - 1;
    cout << s << " " << m << "\n";
    for(int i = 0;i < m;i ++){
        if(i >= n) c = 2,k = 0;
        k ++;
        cout << c << " " << k << " ";
        for(int j = 1;j <= n;j ++) cout << a[j] << " ";
        cout << "\n";
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
