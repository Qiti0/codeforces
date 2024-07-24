#include <bits/stdc++.h>
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;

void slove()
{
    int ds,ys,dm,ym;cin >> ds >> ys >> dm >> ym;
    int ans=0;
    for(int i=1;i<=5000;i++)
    {
        if((i+ds)%ys==0&&(i+dm)%ym==0)
        {
            ans=i;
            break;
        }
    }
    cout << ans << '\n';
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