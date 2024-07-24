#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

map<int,string> mp;
void solve()
{
    int n;cin >> n;
    string s;cin >> s;
    int ans = 0;
    int idx = 0;
    mp.clear();
    mp[0] = "map",mp[1] = "pie",mp[2] = "mapie";    for(auto it : mp){
        idx = 0;
        while(idx != -1){
            idx = s.find(it.second,idx);
            if(idx != -1 && it.first != 2) idx += it.second.length(),ans ++;
            if(idx != -1 && it.first == 2) ans --;
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
