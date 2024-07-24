#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

int a[N],v[N],b[N] ;
void solve()
{
   int n,k,d;cin >> n >> k >> d;
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<k;i++) cin >> v[i];
    int ans=0;
    for(int i=0;i<=2*n&&i<d;i++)
    {
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            cnt+=(a[j]==j+1);
        }   
        cnt+=(d-i-1)/2;
        if(ans<cnt) ans=cnt;
        for(int j=0;j<v[i%k];j++)
        {
            a[j]++;
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
