#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;


void solve()
{
    string s,f;
    cin >> s >> f;
    int slen=s.size();
    int flen=f.size();
    int ans=0;
    // cout <<slen << " " << flen<<"\n";
    for(int i=0;i<slen;i++)
    {
        int cnt1=0;
        for(int j=0;j<flen;j++)
        {
            if(s[i]!=f[j])
            {
                cnt1++;
            }
        }
        if(cnt1==flen)
        {
            ans=0;
            break;
        }else{
            ans=10;
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
