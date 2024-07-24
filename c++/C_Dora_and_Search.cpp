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
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    int l=1,r=n;
    int mmax=n,mmin=1;
    while(l<r)
    {
        if(a[l]==mmin)
        {
            l++;
            mmin++;
        }
        else if(a[l]==mmax)
        {
            l++;
            mmax--;
        }
        else if(a[r]==mmin)
        {
            r--;
            mmin++;
        }
        else if(a[r]==mmax)
        {
            r--;
            mmax--;
        }
        else break;
    }
    if(l<r) cout << l << " " << r << "\n";
    else cout << -1 << "\n";
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