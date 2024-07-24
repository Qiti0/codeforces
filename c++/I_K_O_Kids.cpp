#include <bits/stdc++.h>
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

char now[2]={'L','R'};
void slove()
{
    int n,m;cin >> m >> n;
    string s;cin >> s;
    int cnt=0;
    int ans=0;
    for(int i=0;i<m;i++)
    {
        if(s[i]!=now[cnt%2])
        {
            n--;
            cnt--;
        }
        cnt++;
    }
    ans=max(n,ans);
    cout << ans << "\n";
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        slove();
    }
    return 0;
}