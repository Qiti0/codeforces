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
    ll n,k;cin >> n >> k;
    deque <int> dq(n);
    for(int i = 0;i < n;i ++){
        cin >> dq[i];
    }
    int ans = 0;
    while(dq.size() > 1 && k){
        int d = min(dq.front(),dq.back());
        if(k >= 2 * d){
            k -= 2 * d;
            dq.front() -= d;
            dq.back() -= d;
        }else {
            dq.front() -= k / 2 + k % 2;
            dq.back() -= k / 2;
            k = 0;
        }
        if(dq.front() == 0) dq.pop_front();
        if(dq.back() == 0) dq.pop_back();
    }
    if(dq.size() == 1) {
        if(k >= dq.front()){
            ans ++;
        }
    }
    // cout << dq.size() << "\n";
    ans += n - dq.size();
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
