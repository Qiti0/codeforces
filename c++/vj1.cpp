#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

stack <int> s1;
stack <char> s2;
void solve()
{
    int n,m;cin >> n >> m;
    m ++;
    n ++;
    string ans = "Wo AK le";
    while(n --){
        string s;
        getline(cin,s);
        // cout << s << "\n";
        if((int)s.find("qiandao") == -1 && (int)s.find("easy") == -1){
            m --;
            // cout << m << "   " << s << "\n";
            if(m < 0){
                ans = s;
                break;
            }
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
        solve();
    }
    return 0;
}
