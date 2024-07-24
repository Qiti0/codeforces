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
    int n,p;cin >> n >> p;
    vector <int> a(n);
    for(int i = 0;i < n;i ++) cin >> a[i],a[i] %= p,mp[a[i]] ++;
    if(mp[0]){
        cout << 1 << "\n";
        return;
    }else {
        
    }
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
