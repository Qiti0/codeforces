#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

map <string,int> mp;
void solve()
{
    int n;cin >> n;
    int m = n;
    int sum = 0;
    int aver = 0;
    while(m --)
    {
        string name;cin >> name;
        int num;cin >> num;
        mp[name] = num;
        sum += num;
    }
    aver = sum / n / 2;
    // cout << aver << "\n";
    int mn = 110;
    for(auto it : mp)
    {
        it.second = abs(it.second - aver);
        mn = min(it.second,mn);
        // cout << it.first << " " << it.second << "\n";
    }
    // cout << mn << "\n";
    string ans;
    for(auto it : mp)
    {
        it.second = abs(it.second - aver);
        // cout << it.first << " " << it.second << "\n";
        if(it.second == mn)
        {
            ans = it.first;
            // break;
        }
        // break;
    }
    cout << aver << " " << ans << "\n"; 
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
