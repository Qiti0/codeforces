#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

struct node
{
    int to,w;
    node(int tto,int ww){
        to = tto;
        w = ww;
    }
};

vector <node> g[N];
int flag = 1;
int cnt = 0;
int dfs(int x){
    for(int i = 0;i < g[x].size();i ++){
        if(flag){
            if(g[x][i].w == 1){
                cnt ++;
                dfs(g[x][i].to);
            }else{
                return cnt;
            }
        }else{
            if(g[x][i].w == 0){
                return cnt;
            }else{
                cnt ++;
                dfs(g[x][i].to);
            }
        }
    }
}
void solve()
{
    int n;cin >> n;
    int x,y,k;
   
    for(int i = 1;i <= n;i ++){
        cin >> x >> y >> k;
        g[x].push_back(node{y,k});
    }

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
