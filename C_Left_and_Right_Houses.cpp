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
    string s;cin >> s;
    vector <int> a(n + 1);
    int idx = 0;
    for(int i = 0;i < n;i ++){
        if(s[i] == '1'){
            idx ++;
        }
        a[i + 1] = idx;
    }  
    // for(auto it : a) cout << it << " ";
    int ans = 1e9,mid = n;
    for(int i = 0;i <= n;i ++){
        int antl = i - a[i];
        int antr = a[n] - a[i];
        int idxl = ceil(1.0 * i / 2);
        int idxr = ceil(1.0 * (n - i) / 2);
        // cout << antl << " " << antr << "\n";
        // cout << idxl << " " << idxr << "\n";
        if(antl >= idxl && antr >= idxr){
            if(abs(ans * 2 - mid) > abs(i * 2 - mid)){
                ans = i;
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
