#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;


void slove()
{
    string s;cin >> s;
    string ans="";
    string ans1="";
    for(int i=1;i<=8;i++)
    {
        ans=s[0];
        ans+=(i+'0');
        if(ans!=s) cout << ans << "\n";
    }
    char cnt='a';
    for(int i=0;i<8;i++)
    {
        ans1=cnt;
        ans1+=s[1];
        if(ans1!=s)cout << ans1 <<  "\n";
        cnt++;
    }
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
