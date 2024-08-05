#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

int w[N];
bool vis[N];
vector <int> g[N];

void dfs(int x){
    int cnt = 1e9;
    int idx = 1e9;
    // vis[x] = 1;
    for(int i = 0;i < g[x].size();i ++){
        // if(vis[g[x][i]]) continue;
        cnt = min(w[g[x][i]],cnt);
        idx = min(idx,cnt);
        cout <<i << " " << x << " "<< cnt  << " " << w[x] << "\n";
        dfs(g[x][i]);
        idx = min(idx,cnt);
    }
    if(idx < 1e9) w[x] += idx;
    // cout << x << " " << w[x] << "\n";
}
void solve()
{
    int n;cin >> n;
    for(int i = 1;i <= n;i ++) cin >> w[i];

    for(int i = 2;i <= n;i ++){
        int x;cin >> x;
        // g[i].push_back(x);
        g[x].push_back(i);
    }

    dfs(1);
    for(int i = 1;i <= n;i ++) cout << w[i] << " ";
    cout << "\n";
    // dfs(1);
    // for(int i = 0;i < n;i ++){
    //     for(int j = 0;j < g[i].size();j ++){
    //         cout  << i << " " << g[i][j] << "\n";
    //     }
    // }

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
