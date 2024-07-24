#include <bits/stdc++.h>
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

void slove()
{
    ll m;cin >> m;
    ll ansl=0,ansr=0;
    for(ll i=1;i<m;i++)
    {
        ll k=ll(2*m+i*i-i);
        if(ceil((sqrt(1+4*k)-1)/2)==floor((sqrt(1+4*k)-1)/2))
        {
            ansr=((sqrt(1+4*k)-1)/2);
           if(ansr>i) cout << i <<" " <<ansr << '\n';
        }
    }
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