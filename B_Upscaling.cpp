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
    int n;cin >> n;
    string s1,s2;
    for(int i = 1;i <= n;i ++){
        if(i % 2)s1 += "##";
        else s1 += "..";
        if(i % 2) s2 += "..";
        else s2 += "##";
    }
    // cout << s1 << "\n" << s2 << "\n";
    int flag = 1;
    while(n){
        n --;
        if(flag ^= 0) cout << s1 << "\n" << s1 << "\n";
        if(flag ^= 1) cout << s2 << "\n" << s2 << "\n";
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
        solve();
    }
    return 0;
}
