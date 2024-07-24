#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;


void solve()
{
    int a,b,c,d;cin >> a >> b >> c >> d;
    double s=1.0*a/b;
    double y=1.0*c/d;
    if(s>y)
    {
        cout << "S" << "\n";
    }else{
        cout << "Y" << "\n";
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
