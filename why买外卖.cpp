#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

struct price
{
    int a,b;
}p[N];
bool cmp(price x, price y)
{
    if(x.a == y.a) return x.b > y.b;
    return x.a > y.a;
}
void solve()
{
    int n,m;cin >> n >> m;
    ll b = 0ll;
    b += m;
    for(int i = 0;i < n;i ++)
    {
        cin >> p[i].a >> p[i].b;
        b += p[i].b;
    }
    sort(p,p + n,cmp);
    int i = 0;
    while(b < p[i].a && i < n)
    {
        b -= p[i].b;
        i++;
    }
    cout << b << "\n";
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
