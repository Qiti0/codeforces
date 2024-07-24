#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

int idx[30];
void solve()
{
    int n;cin >> n;
    memset(idx,0,sizeof(idx));
    vector <int> a(n);
    string ans;
    for(int i = 0;i < n;i ++) cin >> a[i];
    for(int i = 0;i < n;i ++)
    {
        for(int j = 0;j < 26;j ++)
        {
            if(idx[j] == a[i])
            {
                ans += 'a' + j;
                idx[j] ++;
                break;
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
