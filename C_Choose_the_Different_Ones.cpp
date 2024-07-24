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
    int n,m,k;cin >> n >> m >> k;
    vector <int> a(n),b(m);
    mp.clear();
    int t1 = 0,t2 = 0,t3 = 0;
    for(int  i = 0;i < n;i ++)
    {
        cin >> a[i];
        if(a[i] <= k && !mp[a[i]])
        {
            t1 ++;
            mp[a[i]] = 1;
        }
    }
    for(int i = 0;i < m;i ++) 
    {
        cin >> b[i];
        if(b[i] <= k && mp[b[i]] != 2)
        {
            t2 ++;
            if(mp[b[i]]) mp[b[i]] = 2;
        }
    }
    for(auto it : mp)
    {
        if(it.second >= 2) t3 ++;
    }
    int cmp = k / 2;
    // cout << t1 << " " << t2 <<" " << t3 << "\n";
    if(t1 + t2 - t3 >= k && t1 >= cmp && t2 >= cmp)
    {
        cout << "NO" << "\n";
    }else{
        cout << "YES" << "\n";
    }
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
