#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

int a[15] ={1,10,11,100,101,110,111,1000,1001,1010,1011,1100,1101,1110,1111};
int b[15] = {10001,10010,10011,10100,10101,10110,10111,11000,11001,11010,11011,11100,11101,11110,11111};
set <int> s;
void solve()
{
   int n;cin >> n;
//    cout << s.size() << "\n";
    for(auto it : s){
        // cout << it << "\n";
        if(it == n){
            cout << "YES" << "\n";
            return;
        }
    }
    cout << "NO" << "\n";
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t = 1;
    cin >> t;
    for(int i = 0;i < 15;i ++){
        for(int j = 0;j < 15;j ++){
            for(int k = 0;k < 15;k ++){
                for(int l = 0;l < 15;l ++){
                    int t = a[i] * a[j] * a[k] * a[l]; 
                    if(t > 0 && t <= (int)1e5 ){
                        s.insert(t);
                    }
                }
            }
        }
    }
    for(int i = 0;i < 15;i ++) s.insert(b[i]);
    while (t--)
    {
        solve();
    }
    return 0;
}
