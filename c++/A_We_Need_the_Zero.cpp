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
    int ans=-1;
    for(int i=0;i<=256;i++)
    {
        int cnt=a[0];
        cnt^=i;
        for(int j=1;j<n;j++)
        {
            cnt^=a[j]^i;
        }
        if(cnt==0)
        {
            ans=i;
            break;
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
