#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

stack <char> s;
map <int,string> mp;
void solve()
{
    mp.clear();
    int n,m,k;cin >> n >> m >> k;
    for(int i = 1;i <= n;i ++){
        cin >> mp[i];
        // cout << mp[i] << "\n";
    }
    int x;
    string ans;
    while(cin >> x && x != -1){
        if(!s.empty() && (x == 0 || (int) s.size() >= k)){
            ans += s.top();
            s.pop();
        }   
        if(!mp[x].empty()){
            s.push(mp[x][0]);
            mp[x].erase(0,1);
        }
    }
    cout << ans << "\n";
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
