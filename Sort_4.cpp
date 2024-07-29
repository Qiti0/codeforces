#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}


map <int,int> mp;
void solve()
{
    int n;cin >> n;
    vector <int> a(n + 1);
    for(int i = 1;i <= n;i ++) cin >> a[i],mp[a[i]] = i;
    int ans = 0;
    int l = 1,r = n;
    while(ans < 2){
        if(a[l] == l) {
            l ++;
        }
        if(a[r] == r){
            r --;
        }

        if(a[l] != l && a[r] != r){
            int ll = a[l];
            int rr = a[r];
            a[l] = a[a[l]];
            a[r] = a[a[r]];
            cout << a[a[l]] << " " << a[a[r]] << "\n";
            cout << a[l] << " " << a[r] << "\n";
            if(a[l] == r || a[r] == l) swap(a[l],a[r]);
            a[a[l]] = ll;
            a[a[r]] = rr;
            ans ++;
            // cout << a[l] << " " << a[r] << "\n";
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
