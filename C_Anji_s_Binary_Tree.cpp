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
    vector <int> l(n);
    vector <int> r(n);
    for(int i = 0; i < n;i ++)
    {
        cin >> l[i] >> r[i];
        l[i] --,r[i] --;
    }
    auto dfs = [&](auto self ,int x) -> int {
        if(l[x] == -1 && r[x] == -1)
        {
            return 0;
        }
        int ans = n;
        if(l[x] != -1)
        {
            ans = self(self,l[x]) + (s[x] != 'L');
        }
        if(r[x] != -1)
        {
            ans = min(ans,self(self,r[x]) + (s[x] != 'R'));
        }
        return ans;
    };
    int ans = dfs(dfs,0);
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
