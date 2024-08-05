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
    int n,m,k;cin >> n >> m >> k;
    vector <int> a(n);
    int N = n,M = 1;
    for(int i = 0;i < n;i ++){
        if(N > m){
            a[i] = N --;
        }else{
            a[i] = M ++;
        }
    }
    for(auto it : a) cout << it << " ";
    cout << "\n";
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
