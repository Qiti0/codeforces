#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

int ans[N];
void solve()
{
    int n;cin >> n;
    vector <int> a(n + 1);
    memset(ans,0,sizeof(ans));
    for(int i = 1;i <= n;i ++) cin >> a[i];
    for(int i = 1;i <= n;)
    {
        for(int j = i;j <= n;j ++)
        {
            if(a[i] != a[j])
            {
                ans[i] = j;
                i = j;
                break;
            }
            if(j == n)
            {
                for(int k = i; k <= j;k ++)
                {
                    ans[k] = INF;
                }
                i = j + 1;
            }
        }
    }
    for(int i = 2;i <= n;i ++)
    {
        ans[i] = max(ans[i],ans[i - 1]);
        if(ans[i] == INF) ans[i] = -1;
    }
    // for(int i = 1;i <= n;i ++) cout << ans[i] << " ";
    // cout << "\n";
    int q;cin >> q;
    while(q --)
    {
        int l,r;cin >> l >> r;
        int res = ans[l] <= r ? ans[l] : -1 ;
        cout << min(l,res) <<" "<< res << "\n";
    }
}
void slove()
{
    int n;
    std::cin >> n;
    
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    
    std::vector<int> nxt(n);
    nxt[n - 1] = n;
    for (int i = n - 2; i >= 0; i--) {
        nxt[i] = a[i] == a[i + 1] ? nxt[i + 1] : i + 1;
    }
    
    int q;
    std::cin >> q;
    for(int i = 0;i < n;i ++)
    {
        cout << nxt[i] + 1 <<" "; 
    }
    cout << "\n";
    while (q--) {
        int l, r;
        std::cin >> l >> r;
        l--;
        // if (nxt[l] < r) {
        //     std::cout << l + 1 << " " << nxt[l] + 1 << "\n";
        // } else {
        //     std::cout << -1 << " " << -1 << "\n";
        // }
    }
}
int main()
{
    // std::ios::sync_with_stdio(false);
    // std::cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        // slove();
    }
    return 0;
}
