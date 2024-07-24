#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

bool prime(int x)
{
    if(x == 1) return false;
    if(x == 2) return true;
    for(int i = 2;i <= sqrt(x);i ++)
    {
        if(x % i == 0) return false;
    }
    return true;
}
int a[1000010];
map <int,int> mp;
void solve()
{
    // freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
    for(int i = 2;i <= 1000;i ++)
    {
        mp.clear();
        int n = i;
    int N = n;
    int m = n;
    if(n == 1)
    {
        cout << -1 << "\n";
        return;
    }
    while(m > 0)
    {
        m += 1;
        while(!prime(m))
        {
            m ++;
        }
        // cout << m << "\n";
        for(int i = n;i >= m - n;i --)
        {
            a[i] = m - i;
            mp[m - i] ++;
        }
        m = m - n - 1;
        n = m;
    }
    for(int i = 1;i <= N;i ++) {
        cout << a[i] << " ";
        if(a[i] > N) cout << "NO" << "\n";
    }    
     cout << "\n";
    }
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
