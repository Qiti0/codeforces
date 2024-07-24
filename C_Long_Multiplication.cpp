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
    string x,y; cin >> x >> y;
    int flag = 0;
    for(int i = 0;i < (int)x.size();i ++){
        if(x[i] == y[i]) continue;
        if(x[i] > y[i]){
            if(flag) swap(x[i],y[i]);
            flag = 1;
        }
        if(!flag && x[i] < y[i]) swap(x[i],y[i]),flag = 1;
    }
    cout << x << "\n" << y << "\n";
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
