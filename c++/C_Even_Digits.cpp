#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

void solve()
{
    ll n;cin >> n;
    vector <int> ans;
    n--;
    while(n)
    {
        ans.push_back(2*(n%5ll));
        n/=5ll;
    }
    if(ans.empty()) ans.push_back(0);
    reverse(ans.begin(),ans.end());
    for(auto& it:ans) cout << it;
    cout << "\n";
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
