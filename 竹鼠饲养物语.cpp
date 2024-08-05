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
    int n,m;cin >> n >> m;
    vector <int> a(n + 1);
    for(int i = 0;i < n;i ++) cin >> a[i];
    a[n] = 1e9 + 10;
    sort(a.begin(),a.end());
    int now = 0,dj = 1,ans = 0,old = 1e9;
    for(int i = 0;i < n;i ++){
        if(a[i] == dj){
            now ++;
            now = min(old,now);
        }else{
            break;
        }
        if(a[i] != a[i + 1]){
            ans += now;
            old = now;
            dj ++;
            now = 0;
        }
    }
    cout << ans << "\n";
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
