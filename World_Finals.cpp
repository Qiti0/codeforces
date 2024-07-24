#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

struct bs{
    string s;
    int pm;
    int time;
};

bool cmp(bs x,bs y){
    if(x.pm == y.pm) return x.time < y.time;
    return x.pm > y.pm;
}

bs bs4[N],bs5[N];

map <string,int> mp1;
void solve()
{
    int n;cin >> n;
    for(int i = 0;i < n;i ++) 
    {
        cin >> bs4[i].s >> bs4[i].pm >> bs4[i].time;
        mp1[bs4[i].s] = 1;
    }
    int m;cin >> m;
    for(int i = 0;i < m;i ++){
        cin >> bs5[i].s >> bs5[i].pm >> bs5[i].time;
    }
    sort(bs4,bs4 + n,cmp);
    sort(bs5,bs5 + m,cmp);

    int idx4,idx5,cnt4 = 0,cnt5 = 0;
    for(int i = 0; i < n;i ++){
        if(bs4[i].s == "lzr010506"){
            idx4 = i;
        }
        if(bs5[i].s == "lzr010506"){
            idx5 = i;
        }
    }

    for(int i = 0;i < idx5;i ++){
        if(mp1[bs5[i].s]){
            cnt5 ++;
        }
    }
    mp1.clear();
    for(int i = 0;i < m;i ++){
        mp1[bs5[i].s] = 1;
    }
     for(int i = 0;i < idx4;i ++){
        if(mp1[bs4[i].s]){
            cnt4 ++;
        }
    }
    int ans = 0;
    ans = min(idx4 - cnt4 + 1,idx5 - cnt5 + 1);
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
