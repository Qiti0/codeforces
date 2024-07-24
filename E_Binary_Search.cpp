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
    int n,x;cin >> n >> x;
    vector <int> a(n + 1);
    int idx = 0;
    for(int i = 1;i <= n;i ++){
        cin >> a[i];
        if(a[i] == x) idx = i;
    }
    int l = 1, r = n + 1, m = 0;
    while(r - l > 1){
        m = (l + r) / 2;
        if(a[m] <= x){
            l = m;
        }else{
            r = m;
        }
    }
    cout << 1 << "\n";
    cout << idx << " " << l << "\n";
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
