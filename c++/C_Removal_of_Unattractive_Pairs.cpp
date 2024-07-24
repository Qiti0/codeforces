#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

map<char,int> mp;
void slove()
{   
    mp.clear();
    int n;cin >> n;
    string s;cin >> s;
    for(int i=0;i<n;i++)
    {
        mp[s[i]]++;
    }
    int mmax=0,sum=0;
    for(auto it:mp)
    {
        mmax=max(mmax,it.second);
        sum+=it.second;
    }
    // cout << mmax << " " << sum <<"\n";
    int mmin=sum-mmax;
    int ans=0;
    if(n&1) ans=1;
    ans=max(ans,mmax-mmin);
    cout << ans << '\n';
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--)
    {
        slove();
    }
    return 0;
}
