#include <bits/stdc++.h>
using namespace std;
const double pi =acos(-1);
const int N =1e5+10;
typedef long long ll;

void slove()
{
    int a,b,c;cin >> a >> b >> c;
    int cnt=1,ant=1;
    while(cnt<c)
    {
        ant*=10;
        ant+=1;
        cnt++;
    }
    // cout << ant << "\n";
    int anta=ant,antb=ant;
    int ra=1,cnta=1,cntb=1,rb=1;
    while(c<a)
    {
        anta*=11;
        a--;
    }
    while(c<b)
    {
        antb*=10;
        b--;
    }
    cout << anta << " " << antb << "\n";
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