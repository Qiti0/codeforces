#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 1e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

int a[N];
int f[N][3];
void solve()
{
    int x;
    int len=0;
    while(cin >> x)
    {
       a[++len]=x;
    }
    int now=3e4+1;
    int mx=0,mn=0;
    for(int i=1;i<=len;i++)
    {
        if(now>=a[i])
        {
            if(f[i-1][0])
        }
    }
    cout << mx << "\n" << mn << "\n";
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}


