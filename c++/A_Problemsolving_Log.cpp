#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

map<char,int> mp;
void slove()
{
    int n;cin >> n;
    string s;cin >> s;
    mp.clear();
    int ans=0;
    for(int i=0;i<n;i++)
    {
        mp[s[i]]++;
        // cout << (s[i]-'A'+1) << "\n";
    }
    for(auto it:mp)
    {
        if(it.second>=(it.first-'A'+1)) ans++;
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
        slove();
    }
    return 0;
}
