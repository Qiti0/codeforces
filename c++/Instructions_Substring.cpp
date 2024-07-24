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
    int n,x0,y0;cin >> n >> x0 >> y0;
    string s;cin >> s;
    vector <int> x(n + 1),y(n + 1);
    for(int i = 0;i < n;i ++){
        if(s[i] == 'W'){
            y[i + 1] = y[i] + 1;
            x[i + 1] = x[i];
        }else if(s[i] == 'S'){
            y[i + 1] = y[i] - 1;
            x[i + 1]= x[i];
        }else if(s[i] == 'A'){
            x[i + 1] = x[i] - 1;
            y[i + 1] = y[i]; 
        }else {
            x[i + 1] = x[i] + 1;
            y[i + 1] = y[i];
        }
    }

    
    ll ans = 0ll;
    map <pii,int> idx;
        if(x0==0&&y0==0){
         
        long long int ans=n+1;
        ans*=n;
        ans/=2;
        cout << ans;
        return ;
    }
    for(int i = n;i >= 0;i --){
        idx[{x[i],y[i]}] = i;
        if(idx.count({x[i] + x0,y[i] + y0})){
            int l = idx[{x[i] + x0,y[i] + y0}];
            // l = max(l,i + 1);
            // cout << l << " " << i + 1 << "\n";
            ans += n - l + 1;
        }
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
