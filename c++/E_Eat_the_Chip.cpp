#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;


void solve()
{
    int m,n,xa,ya,xb,yb;cin >> m >> n >> xa >> ya >> xb >> yb;
    string ans="";
    int dx=abs(xa-xb),dy=abs(ya-yb);
    if(xa>xb||dx<dy)
    {
        ans="Draw";
    }else{
        if(dx>=dy&&(dx&1))
        {
            int step=(dx+1)/2;
           if(abs(ya-yb)<=1||(ya<yb?n-ya:ya-1)<=step)
           {
                ans="Alice";
           }else{
                ans="Draw";
           }

        }else if(dx>=dy&&dx%2==0){
            int step=dx/2;
            if(ya==yb||(yb<ya?n-yb:yb-1)<=step)
            {
                ans="Bob";
            }else{
                ans="Draw";
            }
        }
    }
    cout << ans << "\n";
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
