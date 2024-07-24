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
    string s;cin >> s;
    int cnt = 0,ant = 0;
    for(int i = 0;i < n;i ++)
    {
        if(!cnt && s[i] == 'd')
        {
            cnt = 1;
        }
        if(cnt == 1 && s[i] == 'f')
        {
            cnt = 2;
        }
        if(cnt == 2 && s[i] == 's')
        {
            cnt = 3;
        }
        if(!ant && s[i] == 'D')
        {
            ant = 1;
        }
        if(ant == 1&& s[i] == 'F')
        {
            ant = 2;
        }
        if(ant == 2 && s[i] == 'S')
        {
            ant = 3;
        }
    }
    if(cnt == 3) cnt = 1;
    else cnt = 0;
    if(ant == 3) ant = 1;
    else ant = 0;
    cout << ant << " " << cnt << '\n';
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
