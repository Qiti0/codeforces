#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 1e6 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x){ return x & (- x);}

int a[N],s[N],t[N];
int n,q;
void update(int x,int k)
{
    for(int i = x;i <= n;i += lowbit(i))
    {
        t[i] += k;
        s[i] += k * (x - 1);
    }
}
int getsum(int x)
{
    int ans = 0;
    for(int i = x;i >= 1;i -= lowbit(i))
    {
        ans += (x * t[i] - s[i]);
    }
    return ans;
}
void solve()
{
    cin >> n >> q;
    for(int i = 1;i <= n;i ++) 
    {
        cin >> a[i];
        update(i,a[i] - a[i - 1]);
    }   
    while(q--)
    {
        int k;cin >> k;
        if(k == 1)
        {
            int l,r,x;cin >> l >> r >> x; 
            update(l,x);
            update(r + 1,-x);
        }else{
            int l,r;cin >> l >> r;
            cout << getsum(r) - getsum(l - 1) << '\n';
        }
    }
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
