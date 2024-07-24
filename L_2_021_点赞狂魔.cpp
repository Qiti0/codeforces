#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

struct dz
{
    string s;
    int res = 0;
};
bool cmp(dz x,dz y)
{
    return x.res > y.res;
}
void solve()
{
    int n;cin >> n;
    int N = n;
    vector <dz> d(n);
    while(n --)
    {
        cin >> d[n].s;
        vector <int> a(1000);
        int x;
        while(cin >> x)
        {
            if(!a[x]) d[n].res ++;
            a[x] ++;
        }
    }
    sort(d.begin(),d.end(),cmp);
    if(N <= 2)
    {
        cout << d[0].s <<" " << d[1].s <<"\n";
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
