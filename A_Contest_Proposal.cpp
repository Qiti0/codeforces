#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

int a[210];
void solve()
{
    int n;cin >> n;
    vector <int> b(n);
    for(int i = n;i < 2 * n;i ++) cin >> a[i];
    for(int i = 0;i < n;i ++) cin >> b[i];        
    int idx = 0;   
    for(int i = 0;i < n;i ++){
        if(a[n - idx + i] > b[i]){
            idx ++;
            a[n - idx + i] = b[i];
        }
    //    cout << a[n - idx + i] << "\n"; 
    }
    // for(int i = 0;i < 2 * n;i ++) cout << a[i] << " ";
    // cout << "\n";
    cout << idx << "\n";
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
