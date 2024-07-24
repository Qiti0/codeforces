#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

int a2[35];
void n2(){
    a2[0] = 1;
    a2[1] = 3;
    for(int i = 2;i <= 30;i ++){
        a2[i] = 2 * a2[i - 1] + 1; 
    }
}
void solve()
{
    int n,k;cin >> n >> k;
    vector <int> a(n);
    int ant = 0;
 
    for(int i = 30;i >= 0;i --){
        // cout << a2[i] << "\n";
        if(k >= a2[i] && ant < n){
            a[ant] = a2[i];
            ant ++;
            k -= a2[i];
        }
    }

    // cout << k << "\n";
    if(ant < n){
        a[n - 1] = k;
        k = 0;
    }
    // cout << k << "\n";
    if(k != 0){
        // cout << a[n - 1] << "\n";
        a[n - 1] += k;
        // cout << a[n - 1] << "\n";
    }

    for(auto it : a){
        cout << it << " ";
    }
    cout << "\n";
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t = 1;
    cin >> t;
    n2();
    while (t--)
    {
        solve();
    }
    return 0;
}
