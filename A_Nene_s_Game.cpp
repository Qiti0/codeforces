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
    int n,k;cin >> n >> k;
    vector <int> a(n);
    vector <int> b(k);
    for(int i = 0;i < n;i ++) cin >> a[i];
    for(int i = 0;i < k;i ++) cin >> b[i];
    int mn = *min_element(a.begin(),a.end());
    for(int i = 0;i < k;i ++){
        cout << min(b[i],mn - 1) << " ";
    }
    cout << "\n";
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
