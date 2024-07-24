#include <bits/stdc++.h>
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

int a[N];
void slove()
{
    int n;cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    int ans=a[0],now=0;
    if(a[0]>0) now=a[0];
    for(int i=0;i+1<n;i++)
    {
        if(now+a[i+1]>=0&&(abs(a[i])+abs(a[i+1]))%2==1&&(a[i]*a[i+1])%2==0)
        {
            now+=a[i+1];
            // cout << now << "\n";
            ans=max(ans,now);
        }else{
            ans=max(ans,a[i+1]);
            now=max(a[i+1],0);
            if(now) ans=max(ans,now);
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
        slove();
    }
    return 0;
}