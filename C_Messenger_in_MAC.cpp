#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e3 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

struct mes{
    int a,b;
}m[N];
bool cmp(mes x,mes y){
    return x.b > y.b;
    if(x.b == y.b) return x.a < y.a;
}
void solve()
{
    int n,l;cin >> n >> l;
    for(int i = 0;i < n;i ++) cin >> m[i].a >> m[i].b;
    sort(m,m + n,cmp);
    int ans = 0;
    for(int i = 0;i < n;i ++){
        ll sum = 0ll;
        // priority_queue <int,vector <int>,less <int> > q;
        multiset <int,greater<int> > q;
        for(int j = i;j < n;j ++){
            int d = l - (m[i].b - m[j].b);
            q.insert(m[j].a);
            sum += m[j].a;
            while(q.size() && d < sum){
                sum -= *q.begin();
                q.erase(q.begin());
            }
            ans = max(ans,(int)q.size());
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
