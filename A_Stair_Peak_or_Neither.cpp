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
    if(a < b && c < b){
        cout << "PEAK" << "\n";
    }else if(a < b && b < c){
        cout << "STAIR" << "\n";
    }else cout << "NONE" << "\n"; 
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
