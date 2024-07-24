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
    vector <int> a(n),b(n),c;
    for(int i = 0;i < n;i ++) cin >> a[i];
    for(int i = 0;i < n;i ++) cin >> b[i];
    sort(a.begin(),a.end());
    int mx = max_element(b.begin(),b.end()) - b.begin();
    int mn = min_element(b.begin(),b.end()) - b.begin();
    int l = lower_bound(a.begin(),a.end(),mn) - a.begin();
    int r = lower_bound(a.begin(),a.end(),mx) - a.begin();
    cout << l << " " << r << "\n";
    if(l != 0) 
    cout << "\n";
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
