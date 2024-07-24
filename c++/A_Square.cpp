#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

int x[4],y[4];
void solve()
{
    for(int i=0;i<4;i++)
    {
        cin >> x[i] >> y[i];
    }
    int w,h;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(x[i]==x[j]&&i!=j)
            {
                w=abs(y[i]-y[j]);
            }
            if(y[i]==y[j]&&i!=j)
            {
                h=abs(x[i]-x[j]);
            }
        }
    }
    cout << w*h << '\n';
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
