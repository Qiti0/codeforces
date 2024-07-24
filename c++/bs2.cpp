#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

int fa[N],a[N];

int find(int x){
    if(fa[x] != x){
        return find(fa[x]);
    }
    return x;
}
map <int,int> mp;
void solve()
{
    int n,m;cin >> n >> m;

    mp.clear();
    for(int i = 1;i <= n;i ++){
        fa[i] = i;
    }
    while(m --){
        int a,b;cin >> a >> b;
        fa[find(b)] = find(a);
    }
    int ans = 0;
    for(int i = 1;i <= n;i ++){
        if(fa[i] == i) ans ++;
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
