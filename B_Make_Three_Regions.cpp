#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

string s[2];
void solve()
{
    int n;cin >> n;
    for(int i = 0;i < 2;i ++) cin >> s[i];
    int ans = 0;
    for(int j = 0;j < 2;j ++){
        for(int i = 0;i + 2 < n;i ++){
            if(s[j][i] == 'x' && s[j][i + 1] == '.' && s[j][i + 2] == 'x'){
                if(s[j ^ 1][i] == '.' && s[j ^ 1][i + 1] == '.' && s[j ^ 1][i + 2] == '.'){
                    ans ++;
                }
            }
        }
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
