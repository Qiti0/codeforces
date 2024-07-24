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
    int a,b,c;cin >> a >> b >> c;
    int sum = a;
    int d = 3 - (b % 3);
    if(d != 3 && d > c){
        cout << -1 << "\n";
        return ;
    }
    sum += b / 3 + (b % 3 != 0);
    if(d == 3) d = 0;
    if(c >= d) sum += (c - d) / 3 + (c - d) % 3 / 2 + ((c - d) % 3) % 2;
    cout << sum << "\n";
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
