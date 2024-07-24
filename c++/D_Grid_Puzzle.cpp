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
    int n;cin >> n;
    vector <int> a(n + 1);
    int ans = 0;
    for(int i = 1;i <= n;i ++) {
        cin >> a[i];
    }

    int f1 = 0,f2 = 0;
    for(int i = 1;i <= n;i ++){
        if(!f1 && !f2){
            ans ++;
            if(a[i] == 0) continue;
            if(a[i] <= 2){
                f1 = 1;
            }
        }else if(f1 && !f2){
            if(a[i] <= 2){
                f1 = 0;
                continue;
            }
            if(a[i] <= 4){
                f2 = 1;
            }
            ans ++;
        }else if(f1 && f2){
            
        }
    }
    cout << ans << '\n';
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
