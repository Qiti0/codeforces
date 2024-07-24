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
    int m,n;cin >> n >> m;
    vector <ll> a(n + 1);
    priority_queue <int> q;
    for(int i = 1;i <= n;i ++) cin >> a[i];
    ll s = 0ll;
    ll ans = 0ll;
    for(int i = m;i > 1;i --){
        s += a[i];
        q.push(a[i]);
        if(s > 0ll){
            s -= 2 * q.top();
            ans ++;
            q.pop();
        }
        // cout << s << " ";
    }
    // cout << "\n";
    while(q.size()) q.pop();
    s = 0ll;
    for(int i = m + 1;i <= n;i ++){
        s += a[i];
        q.push(-a[i]);
        if(s < 0ll){
            s += 2 * q.top();
            ans ++;
            q.pop();
        }
        // cout << s << " ";
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
