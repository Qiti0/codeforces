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
    string l1,l2;cin >> l1 >> l2;
    string ans;
    ans += l1[0];
    int cnt = 1;
    int flag = 0;
    for(int i = 0, j = 1;j < n;i ++,j ++)
    {
        if(l1[j] == l2[i])
        {
            ans += l1[j];
            cnt += 1;
            flag = 1;
        }else {
            ans += '0';
            if(l2[i] == '0') cnt = 1;
        }
    }
    ans += l2[n - 1];
    cout << ans << "\n" << cnt << "\n";
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
