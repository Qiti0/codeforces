#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
ll a[N];
void solve()
{
          int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a,a+n);
    
        for (int i = 0; i < m; i++) {
            ll a1, b, c;
            cin >> a1 >> b >> c;
    
            int ans = lower_bound(a, a+n, b) - a;
            if (ans < n && (a[ans] - b) * (a[ans] - b) < 4 * a1 * c) {
                cout << "YES\n" << a[ans] << "\n";
                continue;
            }
            if (ans > 0 && (a[ans - 1] - b) * (a[ans - 1] - b) < 4 * a1 * c) {
                cout << "YES\n" << a[ans - 1] << "\n";
                continue;
            }
            cout << "NO\n";
        }
}
    signed main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
    
        int q = 1;
        cin >> q;
        while (q--) {
            solve();
        }
        return 0;
    }
