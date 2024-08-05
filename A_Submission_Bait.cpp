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
    mp.clear();
    int n;cin >> n;
    vector <int> a(n);
    for(int i = 0;i < n;i ++) cin >> a[i];
    sort(a.begin(),a.end());
    for(int i = 0;i < n;i ++){
        mp[a[i]] ++;
    }
    int cnt = 0;
    for(auto it : mp){
        cnt += it.second;
        if(cnt & 1){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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
