#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 5010;
typedef long long ll;
typedef pair<int,int> pii;

int f[N][N];
void solve()
{
    string s,t;
    while(cin >> s >> t)
    {
        // cout << s << " " << t;
        int slen=s.size(),tlen=t.size();
        for(int i=1;i<=slen;i++)
            for(int j=1;j<=tlen;j++)
            {
                if(s[i-1]==t[j-1])
                {
                    f[i][j]=f[i-1][j-1]+1;
                }else{
                    f[i][j]=max(f[i-1][j],f[i][j-1]);
                }
            }
        cout << f[slen][tlen] << "\n";
    }
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
