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
    string s;cin >> s;
    int l = -1, r = -1,cnt = 0;
    int ans = 0;
    for(int i = 1;i < n;i += 2){
        if(s[i] == '('){
            l = i;
            r = i + 1;
            cnt += 2;
        }else if(s[i] == ')'){
            if(r == i - 1){
                l = i - cnt - 1;
                r = i;
                cnt = 0;
            }else{
                l = r + 1;
                r = i;
            }
        }
        // cout << l << " " << r << "\n";
        ans += r - l;
    }
    cout << ans << "\n";
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
