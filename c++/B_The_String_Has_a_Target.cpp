#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;


void slove()
{
    int n;cin >> n;
    string s;cin >> s;
    string ans="";
    int flag=0;
    char mmin='z';
    for(int i=0;i<n;i++)
    {
        mmin=min(mmin,s[i]);
    }
    ans+=mmin;
    int at=s.rfind(mmin);
    for(int i=0;i<n;i++)
    {
        if(i!=at)
        {
            ans+=s[i];
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
        slove();
    }
    return 0;
}
