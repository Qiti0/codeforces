#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

vector <ll> m[1010];
void yz(ll x,int y){
    for(ll i = 1;i <= x;i ++){
        if(x % i == 0){
            m[y].push_back(i);
            m[y].push_back(-i);
        }
    }
}
int n;
int vis[1010];
int dis[1010];
int ans = 1e9;

void bfs(int idx){
    queue <pii> q;
    q.push({idx,0});
    vis[idx] = 1;
    dis[idx] = 0;
    while(q.size()){
        auto t = q.front();
        vis[t.first] = 1;
        q.pop();
        for(auto it : m[idx]){
            int ne = t.first + it;
            if(ne < 0 || ne >= n || vis[ne]) continue;
            dis[ne] = t.second + 1;
            q.push({ne,t.second + 1});
        }
    }
    if(idx == n - 1) ans = min(ans,dis[idx]);
}
void solve()
{
    cin >> n;
    vector <ll> a(n);
    for(int i = 0;i < n;i ++){
        cin >> a[i];
        yz(a[i],i);
    }
    // for(int i = 0;i < n;i ++){
    //     for(auto it : m[i]){
    //         cout << it << " ";
    //     }
    //     cout << "\n";
    // }
    bfs(0);
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
