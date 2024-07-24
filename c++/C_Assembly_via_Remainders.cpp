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
    vector <int> a(n - 1),b(n);
    for(int i = 0;i < n - 1;i ++) cin >> a[i];

    b[0] = a[0] + 1;
    for(int i = 1;i < n;i ++){
        int k = 0;
        while(i < n - 1 && a[i] >= k * b[i - 1] + a[i - 1]){
            k ++;
            // cout << k << " " << a[i] <<" "<< k * b[i - 1] * a[i - 1] << "\n";
        }
        b[i] = k * b[i - 1] + a[i - 1];
    }

    for(int i = 0;i < n;i ++) cout << b[i] << " ";
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
