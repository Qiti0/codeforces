#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

struct tree
{
    ll now,to;
};
tree a[N];
ll ans[N];
void slove()
{   
    ll n,m,k,b;cin >> n >> m >> k >> b;
    for(int i=0;i<n;i++) 
    {
        cin >>a[i].now;
    }
    for(int i=0;i<n;i++)
    {
        cin >> a[i].to;
    }
    m--;
    for(int i=0;i<n;i++)
    {
        if((k-a[i].now)/a[i].to+1>m)
        {
            ans[i]=a[i].now+a[i].to*m;
        }else {
            int day=(k-a[i].now)/a[i].to+1;
            int p=ceil(double(1.0*k/b));
            ans[i]=(b+a[i].to*(m-day)%p);
        }
    }
    for(int i=0;i<n;i++) cout << ans[i] << " ";
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
        slove();
    }
    return 0;
}
