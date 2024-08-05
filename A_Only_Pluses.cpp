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
    int a,b,c;cin >> a >> b >> c;
    int ans = 0;
    for(int i = 0;i <= 5;i ++){
        for(int j = 0;j <= 5;j ++){
            for(int k = 0;k <= 5;k ++){
                if(i + j + k <= 5){
                    ans = max(ans,(a + i) * (b + j) * (c + k));
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
