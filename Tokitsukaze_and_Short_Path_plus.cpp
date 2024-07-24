#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

struct node{
    int to,w;
    node(int tto,int ww)
    {
        to = tto;
        w = ww;
    }
};
int dist(int x,int y)
{
    return x + y + abs(x - y);
}
vector <node> g[N];
int dis[N];
int visd[N];
void solve()
{
    int n;cin >> n;
    vector <int> a(n + 1);
    for(int i = 1;i <= n;i ++) cin >> a[i];
    ll ans = 0ll;

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
