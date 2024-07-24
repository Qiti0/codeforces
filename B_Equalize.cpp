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
    sort(a.begin(),a.end());
    a.resize(unique(a.begin(),a.end()) - a.begin());
    int ans = 1;
    int pnt = 0;
    for(int i = 0;i < a.size();i ++)
    {
        while(a[i] - a[pnt] >= n && pnt < a.size())
        {
            pnt ++;
        }
        ans = max(ans,i - pnt + 1);
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
