#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

struct lb
{
    ll add,data;
};
void solve()
{
    ll add;cin >> add;
    int n;cin >> n;
    int N = n;
    vector <lb> a(n);
    while(N --)
    {
        int ad,da,y;cin >> ad >> da >> y;
        a[da].add = ad;
        a[da].data = da;
    }
    int r = n;
    int flag = 0;
    for(int i = 1;i < r;i ++)
    {
        if(flag ^= 1) cout << a[r].add <<" " << a[r].data <<" " << a[i].data << "\n";
        else cout << a[i].add <<" " << a[i].data <<" " <<a[r].add << "\n";
        r --;
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
