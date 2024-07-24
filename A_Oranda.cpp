#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 5e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

map <int,int> mp;
ll n,k,a,l,ans;
void solve()
{
    cin >> n >> k;
    for(int i=1;i<=n;i++){
        cin>>a;
        if(!mp[a]){
            ans += i-l-1;
            l ++;
            mp[a]=1;
        }
        if(l==k){
            cout << ans << "\n";
            return;
        }
    }
    cout << -1 <<"\n";
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
