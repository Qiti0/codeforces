#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 1e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

struct AK
{
    ll x,t;
}ak[N];
bool cmp(AK x, AK y)
{
    return x.x < y.x;
}
priority_queue<ll> q;
void solve()
{
    ll n,m;cin >> n >> m;
    for(ll i = 1;i <= n;i ++)
    {
        cin >> ak[i].x >> ak[i].t;
    }
    sort(ak + 1,ak + n + 1,cmp);
    // for(int i = 0;i <= n ;i ++)
    // {
        // cout << ak[i].x << "\n";
    // }
    ll cnt = 0ll,ant = 0ll,ans = 0ll;
    for(ll i = 1;i <= n;i ++)
    {
        ll dx = ak[i].x - ak[i - 1].x;
        cnt += dx;
        cnt += ak[i].t;
        ant ++;
        q.push(ak[i].t);
        while(q.size() && cnt > m)
        {
            // cout << q.top() << "\n";
            cnt -= q.top();
            ant --;
            q.pop();
        }
        // if(cnt > m) break;
        ans = max(ans , ant);
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
