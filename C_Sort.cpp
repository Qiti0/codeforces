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
    int n,q;cin >> n >> q;
    vector <vector <int> > p1(n + 1,vector <int>(26,0));
    vector <vector <int> > p2(n + 1,vector <int>(26,0));
    for(int i = 1;i <= n;i ++){
        char c;cin >> c;
        p1[i][c - 'a'] ++; 
    }

    for(int i = 1;i <= n;i ++){
        char c;cin >> c;
        p2[i][c - 'a'] ++; 
    }
    for(int i = 1;i <= n;i ++){
        for(int j = 0;j < 26;j ++){
            p1[i][j] += p1[i - 1][j];
            p2[i][j] += p2[i - 1][j];
        }
    }
    while(q --){
        int l,r;cin >> l >> r;
        int ans = 0;
        for(int i = 0;i < 26;i ++){
            int a = p1[r][i] - p1[l - 1][i];
            int b = p2[r][i] - p2[l - 1][i];
            if(a > b) ans += a - b;
        }
        cout << ans << "\n";
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
