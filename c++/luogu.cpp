#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

struct PH
{
    string name;
} up[110],down[110],same[110];

map <int,int> mp;
void solve()
{   
    int n;cin >> n;
    int u = 1,d = 1;
    for(int i = 1;i <= n;i ++){
        string s,op;cin >> s >> op;
        if(op == "UP"){
            up[u].name = s;
            u ++;
        }else if(op == "DOWN"){
            down[d].name = s;
            d ++;
        }else{
            same[i].name = s;
            mp[i] = 1;
        }
    }
    if(d == 0) d = n;
    if(u == 0) u = n; 
    // cout << d << "  " << u << "\n";
    for(int i = 1;i < d;i ++){
        if(mp[i] == 1) {
            mp[i] = 0;
            cout << same[i].name << "\n";
        }
        cout << down[i].name << "\n";
    }
    for(int i = u - 1;i >= 1;i --){
        if(mp[i + d - 1] == 1) {
            cout << same[i + d - 1].name << "\n";
        }
        cout << up[i].name << "\n";
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