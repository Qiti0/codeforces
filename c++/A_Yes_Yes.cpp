#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;


void slove()
{
    string s;cin >> s;
    string ans="YES";
    for(int i=0;i+1<s.size();i++)
    {
        if(s[i]=='Y'&&s[i+1]!='e')
        {
            ans="NO";
           
        }else if(s[i]=='e'&&s[i+1]!='s')
        {
            ans="NO";
           
        }else if(s[i]=='s'&&s[i+1]!='Y')
        {
            ans="NO";
            
        }else if(s[i]!='Y'&&s[i]!='e'&&s[i]!='s')
        {
            ans="NO";
        }
    }
    if(s.size()==1&&(s!="Y"||s!="e"||s!="s"))
    {
        ans="NO";
    }
       if(s.size()==1&&(s=="Y"||s=="e"||s=="s"))
    {
        ans="YES";
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
