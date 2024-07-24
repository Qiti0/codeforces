#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}


void solve()
{
    int n;cin >> n;
    vector <int> a(n);
    priority_queue<int> x;
    priority_queue<int> d;
    ll sum = 0ll;
    string ans = "YES";
    for(int i = 0;i < n;i ++) cin >> a[i],sum += a[i];
    if(sum % n){
        ans = "NO";
    }else{
        int aver = sum / n;
        int res = 0;
        for(int i = 0;i < n;i ++)
        {
            if(a[i] > aver)
            {
                res += a[i] - aver;
            }else if(aver > a[i]){
                res -= aver - a[i];
                if(res < 0) {
                    ans = "NO",res = 0;
                    break;
                }
            }
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
