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
    for(int i = 1;i < (int)s.length();i ++){
        if(s[i] == s[i - 1]){
            char p = 'a';
            for(int j = 0;j < 24;j ++){
                if(p + j != s[i] && p + j != s[i - 1] && p + j != s[0]){
                    p = p + j;
                    break;
                }
            }
            flag = 1;
            s.insert(i,1,p);
            break;
        }
    }
    if(!flag){
        for(int i = 0;i < (int)s.length();i ++){
            char p = 'a';
            for(int j = 0;j < 24;j ++){
                if(p + j != s[i] && p + j != s[i - 1] && p + j != s[0]){
                    p = p + j;
                    break;
                }
            }
            flag = 1;
            s.insert(i,1,p);
            break;
        }
    }
    cout << s << "\n";
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
