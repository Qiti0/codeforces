#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}


void solve()
{
    int n,x,y;cin >> n >> x >> y;
    vector <int> a(n + 1);
    for(int i = y;i <= x;i ++){
        a[i] = 1;
    }
    int flag = 1;
    for(int i = y - 1;i >= 1;i --){
        if(flag) a[i] = -1;
        else a[i] = 1;
        flag ^= 1;
    }
    flag = 1;
    for(int i = x + 1;i <= n;i ++){
        if(flag) a[i] = -1;
        else a[i] = 1;
        flag ^= 1;        
    }
    for(int i = 1;i <= n;i ++) cout << a[i] << " ";
    cout << "\n";
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
