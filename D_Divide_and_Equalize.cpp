#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

ll a[N];
map <int,int> mp;
void breakdown(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0) 
        {
            while(n%i==0) n/=i,mp[i]++;
        }
    }
    if(n>1) mp[n]++;
}
void solve()
{
    mp.clear();
    int n;cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++)
    {
        breakdown(a[i]);
    }
    string ans="YES";
    for(auto it:mp)
    {
        if(it.second>0 && it.second%n!=0) ans="NO"; 
    }
    cout << ans << '\n';
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
