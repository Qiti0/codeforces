#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;


void solve()
{
    int n;cin >> n;
    string f,s;
    cin >> s >> f;
    int cnt1=0,cnt2=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0'&&f[i]=='1')
        {
            cnt1++;
        }
        if(s[i]=='1'&&f[i]=='0')
        {
            cnt2++;
        }
    }
    int ans=max(cnt1,cnt2);
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
