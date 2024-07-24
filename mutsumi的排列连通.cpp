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
    if(x == 2) return true;
    for(int i = 2;i <= sqrt(x);i ++)
    {
        if(x % i == 0) return false;
    }
    return true;
}
void solve()
{
    int n;cin >> n;
    int m = n;
    vector <int> a(n + 1);
    while(a[1])
    {
        while(!prime(m))
        {
            m ++;
        }
        for(int i = n;i >= m - n;i --)
        {
            a[i] = m - i;
            a[m - i] = i;
        }
        m = m - n - 1;
    }
    for(int i = 1;i <= n;i ++) cout << a[i] << " ";
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
