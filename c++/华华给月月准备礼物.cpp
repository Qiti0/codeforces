#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

int a[N];
int n,k;
bool check(int mid)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        count+=a[i]/mid;
    }
    if(count<k) return false;
    return true;
}
void solve()
{
    cin >> n >> k;
    for(int i=0;i<n;i++) cin >> a[i];
    int l=1,r=1e9+1,mid=0;
    while(l+1<r)
    {
        mid=l+((r-l)>>1);
        // cout << l << " " << r << " " << mid << "\n";
        if(check(mid))
        {
            l=mid;
        }else r=mid;
    }
    cout << l << "\n";
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
