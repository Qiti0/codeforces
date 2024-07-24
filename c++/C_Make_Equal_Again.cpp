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
    int l = 0,r = n - 1;
    if(a[l] == a[r])
    {

        while(a[l] == a[0]) l ++;
        while(a[r] == a[0]) r --;
    }else{
        while(a[l] == a[0]) l ++;
        while(a[r] == a[n - 1]) r --;
        if((n - 1 - r) > l)
        {
            l = 0;
        }else r = n - 1; 
    }
    int ans = 0;
    // cout << l << " " << r << "\n";
    ans = max(ans,r - l + 1);
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
