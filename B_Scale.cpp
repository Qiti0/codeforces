#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

char s[1001][1001];
void solve()
{
    int n,k;cin >> n >> k;

    for(int i = 0;i < n;i ++) {
        for(int j = 0;j < n;j ++){
            cin >> s[i][j];
        }
    }
    for(int i = 0;i < n;i += k){
        for(int j = 0;j < n;j += k){
            cout << s[i][j];
        }
        cout << "\n";
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
