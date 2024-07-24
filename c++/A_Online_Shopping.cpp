#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;


void slove()
{
    int n,s,k;cin >> n >>s >>k;
    int ans=0;
    while(n--)
    {
        int a,b;cin >> a >> b;
        ans+=(a*b);
    }
    if(ans<s) ans+=k;
    cout << ans <<"\n";
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        slove();
    }
    return 0;
}
