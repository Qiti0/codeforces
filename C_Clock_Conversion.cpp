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
    string s;cin >> s;
    int flag = 0;
    int hh = (10 *(s[0] - '0')) + (s[1] - '0');
    if(hh == 0){
        string s1 = s.substr(2);
        s = "12" + s1;
    }
    if(hh >= 12){
        flag = 1;
        string s1 = s.substr(2);
        hh -= 12;
        if(hh == 0) hh = 12;
        if(hh < 10) s = '0' + to_string(hh) + s1;
        else s = to_string(hh) + s1;
    }
    if(!flag){
        cout << s << " " << "AM\n"; 
    }else cout << s << " " << "PM\n";
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
