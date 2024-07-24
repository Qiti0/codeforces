#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;


void slove()
{
    int n;cin >> n;
    vector <int> a(n);
    vector <ll> sum(n + 1);
    for(int i = 0;i < n;i ++) cin >> a[i],sum[i + 1] = sum[i] + a[i];
    int odd = 0;
    ll ans = 0ll;
    for(int i = 1;i <= n;i ++)
    {
        ans = sum[i];
        if(a[i - 1] & 1) odd ++;
        ans -= odd / 3;
        ans -= odd % 3 == 1;
        if(i == 1) ans = sum[i];
        cout << ans << " ";
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
        slove();
    }
    return 0;
}
