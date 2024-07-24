#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}


void solve()
{
    string bo;cin >> bo;
    int x = 0;
    // sscanf(bo + 2,"%d",&x);
    // cout << x << "\n";
    int len = bo.size();
    for(int i = 2;i < len;i ++)
    {
        x += (bo[i] - '0') * pow(10,len - i - 1);
        // cout << x << "\n";
    }
    // cout << x << "\n";
    string s;cin >> s;
    int p = 0,r = 0,win = (x + 1) / 2;
    int flag = 1;
    for(int i = 0;i < (int)s.size();i ++)
    {
        if(s[i] == 'P') p ++;
        else r ++;
        if(p >= win)
        {
            cout << "yukari!" << "\n" << i + 1 << "\n";
            flag = 0;
            break;
        }else if(r >= win)
        {
            cout << "kou!" << "\n" << i + 1 << "\n";  
            flag = 0;
            break;
        }
    }
   if(flag) cout << "to be continued.\n" << (int)s.size() << "\n";
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
