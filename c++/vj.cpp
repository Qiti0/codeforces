#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const ll mod = 998244353;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

int d4[22] = {0,20,12,32,40,24,44,52,60,16,36,64,56,72,76,80,28,84,68,88,92,96};
void solve()
{
    vector <int> a(10);
    for(int i = 0;i <= 9;i ++) cin >> a[i];
    string mw;
    string ans;
    int flag = 0;
    for(int i = 0;i < 22;i ++){
        int g = d4[i] % 10;
        int s = d4[i] / 10;
        if(a[g] > 0){
            a[g] --;
            if(a[s] > 0){
                a[s] --;
                // cout << d4[i] << "*\n";
                mw += (s + '0');
                mw += (g + '0');
                flag = 1;
                break;
            }else{
                a[g] ++;
            }
        }
    }
    if(flag){
        for(int i = 9;i >= 0;i --){
            while(a[i] > 0){
                a[i] --;
                ans += (i + '0');
            }
        }
        ans += mw;
        if(ans[0] == '0') ans = "0";
        cout << ans << "\n";
    }else {
        if(a[0] > 0 || a[4] > 0 || a[8] > 0){
            if(a[0]) cout << 0 << "\n";
            else if(a[4]) cout << 4 << "\n";
            else cout << 8 << "\n";
        }else {
            cout << -1 << "\n";
        }
    }
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
