#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

int a[N],b[N];
void solve()
{
    int n,m;cin >> n >> m;
    for(int i=1;i<=n;i++) cin >> a[i];
    for(int i=1;i<=n;i++)
    {
        if(a[i]!=a[i-1])
        {
            b[i]=1;
        }
        b[i]+=b[i-1];
    }
    while(m--)
    {
        int l,r;cin >> l >> r;
        cout << b[r]-b[l]+1 << "\n";
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
        solve();
    }
    return 0;
}
