#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;


struct chr
{
    int la[30];
}chr[30];
map <char,int> mp;
int n,k,m;
void solve()
{
    mp.clear();
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<k;j++)
        {
            chr[i].la[j]=0;
        }
    }
    cin >> n >> k >> m;
    string s;cin >> s;
    int cnt=0;
    for(int i=0;i<k;i++)
    {
        char cr='a'+i;
        for(int j=0;j<m;j++)
        {
            if(mp[cr]==0&&cr==s[j])
            {
                mp[s[j]]=1;
                for(int p=j+1;p<m;p++)
                {
                    int idx=s[p]-'a';
                    chr[cnt].la[idx]++;
                }
                cnt++;
            }
        }
    }
    // for(int i=0;i<cnt;i++)
    // {
    //     for(int j=0;j<k;j++)
    //     {
    //         char cn=j+'a';
    //         cout << cn <<" "<< chr[i].la[j] << " ";
    //     }
    //     cout << "\n";
    // }
    string ans;
    for(int i=0;i<k;i++)
    {
        if(ans.size()>=n) break;
        if(mp[i+'a']==0) ans+=i+'a';
        for(int j=0;j<k;j++)
        {
            if(chr[i].la[j]<n-1)
            {
                if(ans.size()>=n) break;
                ans+=i+'a';
                for(int p=0;p<n;p++)
                {
                    if(ans.size()>=n) break;
                    ans+=j+'a';
                    
                }
                if(ans.size()>=n) break;
            }
        }
    }
    if(ans=="") cout << "YES" << '\n';
    else cout << "NO" << "\n" << ans << "\n";
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
