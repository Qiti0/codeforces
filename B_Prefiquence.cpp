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
    int n,m;cin >> n >> m;
    string a,b;cin >> a >> b;
    int idx = 0,ans = 0;
    for(int i = 0;i < n;i ++){
        for(int j = idx;j < m;j ++){
            if(a[i] == b[j]){
                idx = j + 1;
                ans ++;
                break;
            }
            idx = m;
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
