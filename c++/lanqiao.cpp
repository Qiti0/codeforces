#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

int a[110];
int day[] = {31,28,31,30,31,30,31,31,30,31,30,31};
map <string ,int> mp;
void solve()
{
    string s;
    for(int i = 0;i < 41;i ++) cin >> a[i];
    // for(int i = 0;i < 41;i ++) cout << a[i] << ' ';
    int ans = 0;
    for(int i = 0;i < 41;i ++){
        for(int j = i + 1;j < 41;j ++){
            for(int k = j + 1;k < 41;k ++){
                for(int l = k + 1;l < 41;l ++){
                    int idx = a[i] * 10 + a[j];
                    int d = a[k] * 10 + a[l];
                    if(idx >= 1 && idx <= 12 && d <= day[idx - 1] && d > 0){
                        char y1 = a[i] + '0';
                        char y2 = a[j] + '0';
                        char d1 = a[k] + '0';
                        char d2 = a[l] + '0';
                        s += y1;
                        s += y2;
                        s += d1;
                        s += d2;
                        // cout << s << "\n";
                        if(!mp[s]) mp[s] = 1;
                    }
                    s = "";
                }
            }
        }
    }
    for(auto it : mp){
        if(it.second) ans ++;
    }
    cout << ans << "\n";
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
