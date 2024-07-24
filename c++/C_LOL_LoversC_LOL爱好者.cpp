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
    int ml=0,mo=0,fl=0,fo=0,l=0,o=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='O') o++;
        else l++;
    }
    int ans=-1;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='O') mo++;
        else ml++;
        fl=l-ml;
        fo=o-mo;
        // cout << ml <<" "<<fl << " "<< mo << " "<< fo << "\n"; 
        if((ml||mo)&&(fl||fo)&&fl!=ml&&fo!=mo)
        {
            ans=i+1;
            break;
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
