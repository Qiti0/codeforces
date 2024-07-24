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
    string ans;
    if(n % 2 == 0 && m % 2 == 0)
    {
        ans = "Yes";
    }else if(n % 2 == 0 || m % 2 == 0){
        if(n % 2 == 0)
        {
            if(n / 2 == m)
            {
                ans = "No";
            }else{
                ans ="Yes";
            }
        }else if(m % 2 == 0){
            if(m / 2 == n) 
            {
                ans = "No";
            }else{
                ans = "Yes";
            }
        }
    }else{
        ans = "No";
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
