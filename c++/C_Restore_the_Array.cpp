#include <bits/stdc++.h>
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;

int a[N],b[N];
const int P = 1e9+10;
void slove()
{
    int n;cin >> n;
    a[0]=P,a[n]=P;
    for(int i=1;i<n;i++) cin >> a[i];
    for(int i=0;i+1<=n;i++)
    {
        b[i]=min(a[i],a[i+1]);
    }
    for(int i=0;i<n;i++) cout << b[i] << " ";
    cout << "\n";
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