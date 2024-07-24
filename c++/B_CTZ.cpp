#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

int a[40];
void solve()
{
    for(int i=0;i<31;i++)
    {
        a[i]=(1<<i);
    }
    int k;cin >> k;
    int ans=0;
    for(int i=30;i>=0;i--)
    {
        if(k>=a[i])
        {
            k-=a[i];
            // cout << k <<"\n";
        }
        if(k==0)
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
        solve();
    }
    return 0;
}
