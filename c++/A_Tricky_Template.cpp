#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;


void solve()
{
    int n;cin >> n;
    string a,b,c;cin >> a >> b >> c;
    string ans="YES";
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==c[i]||b[i]==c[i])
        {
            cnt++;
        }
    }
    if(cnt==n) ans="NO"; 
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
