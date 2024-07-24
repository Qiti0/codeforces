#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

struct lb
{
    string add;
    int data;
    string nx;
};
void solve()
{
    string add;cin >> add;
    int n;cin >> n;
    int N = n;
    vector <lb> a(n + 1);
    while(N --)
    {
        int da;
        string ad,ne;cin >> ad >> da >> ne;
        a[da].add = ad;
        a[da].data = da;
        a[da].nx = ne;
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
