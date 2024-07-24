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
    int cnt0 = 0,cnt1 = 0;
    for(int i = 0;i < n;i ++) 
    {
        if(s[i] == '0') cnt0 ++;
        else cnt1 ++;
    }
    if(cnt0 != cnt1) 
    {
        cout << -1 << "\n";
        return;
    }
    int idx = 0;
    vector<int> ans;
    while (!s.empty()) {
        // cout << s << endl;
        if (s.front() == s.back()) {
            if (s.back() == '0') {
                ans.push_back(idx + s.size());
                s += "01";
            } else {
                ans.push_back(idx);
                s = "01" + s;
            }
        }
        idx ++;
        s.erase(0, 1), s.pop_back();
    }
    cout << ans.size() << endl;
    for (auto i : ans) cout << i << ' ';
    cout << endl;
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
