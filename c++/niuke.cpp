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
    int n,l,r;cin >> n >> l >> r;
    vector <int> a(n);
    for(int i = 0;i < n;i ++) cin >> a[i];
    priority_queue <int,vector<int>,greater<int> > q;
    sort(a.begin(),a.end(),less());
    // for(int i = 0;i < n;i ++) cout << a[i] << " ";
    int cnt = 0;
    int idx = 1;
    vector <int> s(n + l);
    for(int i = 0;i < n;i ++){
        if(a[i] > 2) {
            q.push(a[i]),idx ++;
            // cout << s[idx] << "\n";
            // if(!s[idx]) s[idx] = s[idx - 1];
        }
        else cnt ++;
        // cout << q.size() << "\n";
        while(q.size() >= l){
            if(2 * (s[idx - 1] - s[idx - l]) + 1 >= q.top()) q.pop();
            s[idx] += (q.top() - (2 * (s[idx - 1] - s[idx - l]) + 1)) / 2;
            // cout << idx << " " << s[idx - 1] - s[idx - l] << "\n";
            s[idx] += s[idx - 1];
            cout << s[idx] << "\n";
            q.pop();
        }
        // s[idx] += s[idx - 1];
    }
    if(r >= n) {
        cout << "YES" << "\n";
        return;
    }
    int res = (r - l) * s[idx];
    if(res >= cnt){
        cout << "YES" << "\n";
    }else {
        cout << "NO" << "\n";
    }
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
