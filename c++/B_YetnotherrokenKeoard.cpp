#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 2e6 + 10;
typedef long long ll;
typedef pair<int,char> pii;

vector<int> a;
vector<int> b;

void slove()
{   
    string s;cin >> s;
    a.clear();
    b.clear();
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='b'&&s[i]>='a'&&s[i]<='z')
        {
            a.push_back(i);
        }
        if(s[i]=='b')
        {
            if(!a.empty())a.pop_back();
        }
        if(s[i]!='B'&&s[i]>='A'&&s[i]<='Z')
        {
            b.push_back(i);
        }
        if(s[i]=='B')
        {
           if(!b.empty()) b.pop_back();
        }
    }
    string ans="";
    int l=0,r=0;
    // for(auto it : a) cout << it.first << " " <<it.second << "\n";
        while(l<a.size()||r<b.size())
        {
            if(l<a.size()&&(r==b.size()||a[l]<b[r]))
            {
                ans+=s[a[l++]];
            }
            else{
                ans+=s[b[r++]];
            }
        }
        cout <<ans<< "\n";
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
