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
    int n,k;cin >> n >> k;
    priority_queue <ll> q;
    vector <int> a(n);
    for(int i = 0;i < n;i ++) cin >> a[i];
    sort(a.begin(),a.end());
    q.push(a[0] - 1);
    for(int i = 1;i < n;i ++){
        int t = q.top();
        q.pop();
        if(t < a[i]){
            q.push(t + k * ((a[i] - t) / k));
            q.push(a[i] - 1);
        }else{
            q.push(a[i] - 1);
        }
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
