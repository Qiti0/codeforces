#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

int a[N],b[N],c[N];
void solve()
{
    int n;cin >> n;
    for(int i = 1;i <= n;i ++)
    {
        cin >> a[i];
    }
    for(int i = 1;i <= n;i ++)
    {
        cin >> b[i];
    }
    for(int i = 1;i <= n;i ++)
    {
        c[b[i]] = a[i];
    }
    for(int i = 1;i <= n;i ++)
    {
        cout << c[i] << " ";
    }
    cout << "\n";
    sort(b + 1,b + n + 1);
    for(int i = 1;i <= n;i ++)
    {
        cout << b[i] << " ";
    }
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
        solve();
    }
    return 0;
}
