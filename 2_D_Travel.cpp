#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

struct pp{

    int x,y,l,r;
}p[N];
void solve()
{
    int n,m,k,q;cin >> n >> m >> k >> q;
    vector <int> w(k),h(k);
    for(int i = 0;i < k;i ++){
        string s;
        int d;cin >> s >> d;
        if(s == "R"){
            w[i] = d;
        }else if(s == "L"){
            w[i] = -d;
        }else if(s == "U"){
            h[i] = -d;
        }else{
            h[i] = d;
        }
    }
    vector <int> sw(k),sh(k);

    // for(int i = 0;i < w.size();i ++){
    //     cout << w[i] << " ";
    // }

    for(int i = 0;i < q;i ++){
        cin >> p[i].x >> p[i].y >> p[i].l >> p[i].r;
    }
    for(int i = 0;i < k;i ++){
        sw[i + 1] = sw[i] + w[i];
        if(sw[i])
        cout << sw[i] << ' ';
    }

    for(int i = 0;i < k;i ++){  
        sh[i + 1] = sh[i] + h[i];
    }


}
int main()
{
    // std::ios::sync_with_stdio(false);
    // std::cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
