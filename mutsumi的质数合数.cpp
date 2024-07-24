#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

int prime(int x)
{
    if(x == 1) return -1;
    if(x == 2) return 1; 
    for(int i = 2;i < x;i ++)
    {
        if(x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
void solve()
{
    int n;cin >> n;
    vector <int> a(n);
    int l1 = 0;
    for(int i = 0;i < n;i ++)
    {
        cin >> a[i];
        if(a[i] == 1) l1 ++; 
    }
    cout << n - l1 << "\n";  
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
