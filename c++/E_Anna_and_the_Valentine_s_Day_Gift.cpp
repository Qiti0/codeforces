#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

struct digit
{
    int d,z;
}g[N];
bool cmp(digit x,digit y)
{
    if(x.z == y.z) return x.d > y.d;
    return x.z > y.z;
}
int wei(int x,digit &y)
{
    int di = 0;
    int num = 0;
    int w = 0;
    while(x){
        if(!di) di = x % 10;
        x /= 10;
        if(!di) num ++;
        w ++;
    }
    y.d = w;
    y.z = num;
}
void solve()
{
    int n,m;cin >> n >> m;
    for(int i = 0;i < n;i ++)
    {
        int a;cin >> a;
        wei(a,g[i]);
        // cout << g[i].d << " "<< g[i].z << "\n";
    }
    sort(g,g + n,cmp);
    ll sum = 0ll;
    for(int i = 0;i < n;i ++)
    {
        // cout << g[i].d << " "<< g[i].z << "\n";
        sum += g[i].d;
        if(i % 2 == 0) sum -= g[i].z;
    }   
    string ans;
    if(sum >= m + 1) ans = "Sasha";
    else ans = "Anna";
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
