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
    int n,x,y;cin >> n >> x >> y;
    vector <int> a(x + 1);
    for(int i = 1;i <= x;i ++) cin >> a[i];
    sort(a.begin(),a.end());
    int idx = 1;
    int l = 0,r = 0;
    a[0] = a[x];
    // for(int i = 0;i <= x;i ++) cout << a[i] << " ";
    int ans = x - 2;
    for(int i = 1;i <= x;i ++){
        l = ((a[i] - a[i - 1]) + n) % n;
        ans += l == 2;
        if(y > 0 && l > 2){
            ans += min(l / 2,y);
            y -= l / 2; 
        }
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
