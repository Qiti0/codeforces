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
    int n,c,d;cin >> n >> c >> d;
    mp.clear();
    vector <int> a(n * n);
    for(int i = 0;i < n * n;i ++) cin >> a[i],mp[a[i]] ++;
    int mn = *min_element(a.begin(),a.end());
    string ans = "NO";
    int cnt = 0;
    for(int j = 0;j < n;j ++){
        for(int k = 0;k < n;k ++){
            if(mp[mn + (j * c) + (k * d)] > 0){
                cnt ++;
                mp[mn + (j * c) + (k * d)] --;
            }
        }
    }
    if(cnt == n * n){
        ans = "YES";
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
