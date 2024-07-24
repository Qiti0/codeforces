#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

void oper(int x,int& g,int& s){
    g = x % 10;
    s = x / 10 % 10; 
}
void solve()
{
    int n;cin >> n;
    vector <int> a(n);
    string ans = "YES";
    for(int i = 0;i < n;i ++) cin >> a[i];
    int g = 0,s = 0,in = a[n - 1];
    for(int i = n - 2;i >= 0;i --){
        if(in < a[i]){
            if(a[i] >= 10){
                oper(a[i],g,s);
                if(g > in || s > g){
                    ans = "NO";
                    break;
                }
                in = s;
            }else {
                ans = "NO";
                break;
            }
        }else in = a[i];
    }   
    cout << ans << "\n";
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