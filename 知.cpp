#include <bits/stdc++.h> 
using namespace std;
const long long mod = 998244353;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}


void solve()
{
    int n;cin >> n;
    vector <ll> a(n + 1);
    for(ll i = 0ll;i < n;i ++) cin >> a[i];
    a[n] = -1;
    ll sum = 0ll,m = 0ll,idx = 0,flag = 0;
    for(int k = 0;k < n;k ++){
        for(ll i = 1ll;i <= n;i ++){
            if(a[i] >= a[i - 1]){
                sum += a[i - 1];
                if(!flag) idx = i - 1;
                flag = 1;
            }else{
                sum += a[i - 1];
                if(!flag) idx = i - 1;
                // cout << sum << " " << i << " " << idx << "\n";
                int mid = sum / (i - idx);
                m = sum % (i - idx);
                for(int j = idx;j < i;j ++){
                    if(m > 0){
                        a[j] = mid + 1;
                        m --;
                    }else{
                        a[j] = mid;
                    }
                }
                sum = 0;
                idx = 0;
                flag = 0;
            }
        }
    }
    ll ans = 1ll;
    for(int i = 0;i < n;i ++){
        cout << a[i] << " ";
        ans *= a[i];
        ans %= mod;
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
