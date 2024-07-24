#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;


void slove()
{
    int n,m;cin >> n >> m;
    string s;cin >> s;
    int len=s.size();
    int pt=m,lt=0,ans=0;
    for(int i=0;i<len;i++)
    {
        if(s[i]=='0')
        {
            pt=m;
            lt=ans;
        }else if(s[i]=='1')
        {
            if(pt<=0&&lt<=0) lt++,ans++;
            if(pt>0) pt--;
            else lt--;
        }else if(s[i]=='2')
        {
            if(lt<=0) lt++,ans++;
            lt--;
        }
    }
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
