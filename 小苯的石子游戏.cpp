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
    int sum = 0;
    int cnt = 0;
    for(int i = 0;i < n;i ++) cin >> a[i],sum += a[i];
    for(int i = n % 2;i < n;i += 2)
    {
        cnt += a[i];
    }
    if(sum - cnt > cnt) cout << "Alice" << "\n";
    else cout << "Bob" << "\n";
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
