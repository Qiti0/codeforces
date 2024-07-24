#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

constexpr ll inf = 1e18;
void solve()
{
    int n,m,k,d;cin >> n >> m >> k >> d;
    d ++;
    vector <ll> cost(n);
    for(int i = 0;i < n;i ++){
        vector <int> a(m);
        for(int j = 0;j < m;j ++){
            cin >> a[j];
            a[j] ++;
        }
        vector <ll> f(m,inf);
        f[0] = 1;
        deque <ll> dq;
        for(int j = 1;j < m;j ++){
            while(dq.size() && f[j - 1] < f[dq.back()]){
                dq.pop_back();
            }
            // for(auto it : dq) cout << it << " ";
            // cout << "\n";
            dq.push_back(j - 1);
            // for(auto it : dq) cout << it << " ";
            // cout << "\n";
            while(dq.front() + d < j){
                dq.pop_front();
            }
            // for(auto it : dq) cout << it << " ";
            // cout << "\n";
            f[j] = a[j] + f[dq.front()];
        }
        cost[i] = f[m - 1];
    }
    ll ans = inf;
    for(int i = 0;i + k <= n;i ++){
        ll sum = 0ll;
        for(int j = 0;j < k;j ++){
            sum += cost[i + j];
        }
        ans = min(ans,sum);
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
