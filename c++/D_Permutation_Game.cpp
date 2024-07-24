#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

int n;

int p[N],a[N],b[N],s[N];

ll mx(int x,ll k){
    ll mxx = 0ll,cnt = 0ll;
    vector <bool> vis(n);
    while(!vis[x] && k > 0){
        mxx = max(mxx,cnt + 1ll * k * a[x]);
        vis[x] = true;
        cnt += a[x];
        x = p[x];
        k --;
    }
    return mxx;
}
void solve()
{
    ll k,pb,ps;cin >> n >> k >> pb >> ps;

    for(int i = 1;i <= n;i ++) cin >> p[i];
    for(int i = 1;i <= n;i ++) cin >> a[i];
    ll mxb = 0ll,mxs = 0ll;

    mxb = mx(pb,k);
    mxs = mx(ps,k);
    if(mxb > mxs){
        cout << "Bodya" << "\n";
    }else if(mxb < mxs){
        cout << "Sasha" << "\n";
    }else{
        cout << "Draw" << "\n";
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
