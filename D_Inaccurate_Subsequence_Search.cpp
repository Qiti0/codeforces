#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 1e6 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}


deque <int> q,p;
int fa[N],fb[N];
void solve()
{
    int n,m,k;cin >> n >> m >> k;
    vector <int> a(n),b(m);
    q.clear();
    p.clear();
    memset(fa,0,sizeof(fa));
    memset(fb,0,sizeof(fb));
    for(int i = 0;i < n;i ++) cin >> a[i];
    for(int i = 0;i < m;i ++) cin >> b[i],fb[b[i]] ++;
    int ans = 0;
    for(int i = 0;i < n;i ++){
        q.push_back(a[i]);
        // cout <<a[i] << " " << fa[a[i]] << " " << fb[a[i]] << "\n";
        if(fb[a[i]] && fa[a[i]] < fb[a[i]]){
            // cout << a[i] << '\n';
            p.push_back(a[i]);
            fa[a[i]] ++;
        }
        // cout << a[i] << " " << p.size() << "\n";
        if(q.size() >= m) {
            if(p.size() >= k) ans ++;
            // cout << q.front() <<" " << p.front()<< "\n";
            if(q.front() == p.front()) {
                q.pop_front();
                fa[p.front()] --;
                // cout << p.front() << " " << fa[p.front()] << "\n";
                p.pop_front();
                if(q.size() && fb[q.front()] && fa[q.front()] < fb[q.front()]){
                    p.push_front(q.front());
                    fa[q.front()] ++;
                }
                // cout << p.front() << " " << fa[p.front()] << "\n";
            }
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