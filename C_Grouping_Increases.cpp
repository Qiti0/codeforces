#include <bits/stdc++.h> 
using namespace std;
#define INF 0x3f3f3f;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

int a[N];
void solve()
{
    int n;cin >> n;
    for(int i=1;i<=n;i++) cin >> a[i];
    int cnt=0;
    int l=1,r=2;
    int ans=0;
    int mn=INF;
    int ma=INF;
    for(int i=1;i<=n;i++)
    {
        if(mn>ma)
        {
            swap(mn,ma);
        }
        if(a[i]<=mn)
        {
            mn=a[i];
        }else if(a[i]<=ma)
        {
            ma=a[i];
        }else{
            mn=a[i];
            ans++;
        }
    }
    // cout << cnt << "\n";
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
