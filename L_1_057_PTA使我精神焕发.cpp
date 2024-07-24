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
    string s;getline(cin,s);
    string ans;
    string res;
    int cnt = 0;
    int flag = 1;
    for(int i = 0;i + 1 < (int)s.size();i ++){ 
        while(i + 1 < (int)s.size() && s[i] == s[i + 1] && s[i] == '6'){
            cnt ++;
            res += s[i];
            i ++;
            flag = 1;
        }
        if(flag) res += s[i];
        i += flag == 1;
        flag = 0;
        if(cnt > 3 && cnt <= 9){
            ans += '9';
        }else if(cnt > 9){
            ans += "27";
        }else {
            ans += res;
        }
        ans += s[i],res = "";
        cnt = 1;
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
        solve();
    }
    return 0;
}
