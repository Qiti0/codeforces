#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 1e7 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}


ll f[25][N];
ll s[N];
void F(){
    for(int i = 1;i <= 21;i ++){
        f[i][1] = 1;
    }
    for(int i = 2;i <= 21;i ++){
        f[i][1 << (i - 1)] = i;
        for(int j = (1 << (i - 1)) + 1;j < (1 << i);j ++){
            int k = j - (1 << (i - 1));
            int idx = 0;
            while(k){
                k >>= 1;
                idx ++;
            }
            f[i][j] = f[idx][j - (1 << (i - 1))];
        }
    }

    for(int i = 1;i <= 21;i++){
        for(int j = (1 << (i - 1));j < (1 << i);j ++){

            s[j] = s[j - 1] + f[i][j];
            // cout << j << "-"<< s[j] << " ";
        }
        // cout << "\n";
    }
}
void solve()
{
    int x,y;cin >> x >> y;
    cout << s[x + y] - s[x] << "\n";
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t = 1;
    cin >> t;
    F();
    while (t--)
    {
        solve();
    }
    return 0;
}
