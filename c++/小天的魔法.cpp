#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

int a[N],b[N];
void slove()
{
    int n,m,k;cin >> n >> m >> k;
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<m;i++) cin >> b[i];
    sort(a,a+n,greater());
    sort(b,b+m,greater());
    int ans=0;
    int i=0,j=0;
    while(k>=1)
    {
        int flag=0;
        if(k-b[j]<1)
        {
            ans++;
            k-=b[j];
            break;
        }
        if(a[i]>1&&i<n)
        {
            ans++;
            flag=1;
        }
        if(j<m&&b[j]>0)
        {
            ans++;
            if(flag) k-=(b[j]*a[i]);
            else k-=b[j];
            i++;
            j++;
        }
        if(j>=m) break;
    }
    if(k>1) ans=-1;
    cout << ans << "\n";
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
