#include <bits/stdc++.h>
using namespace std;
const double pi =acos(-1);
const int N =1e5+10;
typedef long long ll;

void slove()
{
    int x,y,k;cin >> x >> y >> k;
    if(x>=y) cout << x << "\n";
    else 
    {
        int ans=0;
        ans=y+max(0,y-x-k);
        cout << ans << '\n';
    }
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--)
    {
        slove();
    }
    return 0;
}