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
    int n,m;cin >> n >> m;
    vector <int> a(n);
    int cnt = 0 , ant = 0;
    for(int i = 0;i < n;i ++){
        cin >> a[i];
        if(a[i] - 1 <= 0){
            cnt ++;
        }
        if(a[i] + 1 > m){
            ant ++;
        }
    }
    if(!cnt || !ant)cout << "Yes" << "\n";
    else cout << "No" << "\n";
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
