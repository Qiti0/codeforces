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
    vector <int> a(n + 1);
    int K = k;
    for(int i = 1;i <= n;i ++) cin >> a[i];
    int ans = 0,flag = 0,cnt = 0;
    swap(a[K],a[1]);
    k = 1;
    for(int i = 2;i <= n;i ++){
        if(a[i] < a[k]){
            ans ++;
        }else break;
    }
    swap(a[K],a[1]);
    k = K;
    for(int i = 1;i <= n;i ++){
        if(a[i] < a[k]){
            if(i < k) cnt = 1;
            else if(i > k) cnt ++;
        }else{
            if(flag) break;
            if(i < k){
                swap(a[i],a[k]);
                k = i;
                flag = 1;
            }else if(i > k) break;
        }
    }  
    ans = max(ans,cnt);
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
