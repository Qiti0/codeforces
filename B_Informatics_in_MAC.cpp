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
    for(int i = 0;i < n;i ++) cin >> a[i];
    vector <int> l(n);
    vector <int> cnt(n + 1);
    int x = 0;
    for(int i = 1;i < n;i ++){
        cnt[a[i - 1]] ++;
        while(cnt[x]){
            x ++;
        }
        l[i] = x;
    }
    vector <int> r(n);
    cnt.assign(n,0);
    x = 0;
    for(int i = n - 1;i >= 1;i --){
        cnt[a[i]] ++;
        while(cnt[x]){
            x ++;
        }
        r[i] = x;
    }
    for(int i = 1;i < n;i ++){
        if(l[i] == r[i]){
            cout << 2 << "\n";
            cout << 1 << " " << i << "\n";
            cout << i + 1 << " "  << n << "\n";
            return;
        }
    }
    cout << -1 << "\n";
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
