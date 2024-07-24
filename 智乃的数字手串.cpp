#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}


void solve()
{
    int n;cin >> n;
    vector <int> a(n);
    for(int i = 0;i < n;i ++) cin >> a[i];
    int cnt = 0;
    for(int i = 0;i + 1 < n;i ++)
    {
        if((a[i] + a[i + 1]) % 2 == 0)
        {
            cnt ++;
        }else cnt --;
    }
    if(cnt & 1) cout << "zn" <<"\n";
    else cout << "qcjj" << "\n";
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
