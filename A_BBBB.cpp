#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 1e6 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}


void solve()
{
    string a,b;cin >> a >> b;
    vector <int> c(a.length() + 2);
    vector <int> ans;
    int t = b[0] - '0';
    int idx = 0;
    for(int i = (int)a.length() - 1;i >= 0;i --){
        c[i + 1] += ((a[i] - '0') * t + idx) % 10;
        idx = ((a[i] - '0') * t + idx) / 10;
        c[i] = c[i + 1];
    }
    c[0] += idx;
    for(auto &it : c){
        cout << it;
    }
    cout << "\n";
    idx = 0;


    int l = a.length(),r = a.length();
    int len = b.length();
    while(l >= 1 + (c[0] == c[1])){
        ans.push_back((c[l] - c[r] + idx) % 10);
        idx = (c[l] - c[r] + idx) / 10;
        l --;
        len --;
        r -= (len < 0);
    }
   for(auto &it : ans) cout << it << " ";
   cout << "\n";
    int cnt = b.length() - a.length() - (c[0] != c[1]);
    while(cnt >= 0){
        ans.push_back((c[0] + idx) % 10);
        idx = (c[0] + idx) / 10;
        cnt --;
    }
  for(auto &it : ans) cout << it;
    cout << "\n";
    l = 0,r = a.length();
    while(r >= 1){
        ans.push_back((c[l] - c[r] + idx) % 10);
        idx = (c[l] - c[r] + idx) / 10;
        r --;
    }
    // ans.reserve(ans.size());
    for(auto &it : ans){
        cout << it;
    }
    int i = 0;
    // while(ans[i] == 0){
    //     i ++;
    // }
    // for(;i < (int)a.length() + 2;i ++){
    //     cout << ans[i];
    // }
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
