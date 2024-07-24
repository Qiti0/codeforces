#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

int a[N],b[N],l[N],r[N];
void solve()
{
    int n;cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    int q;cin >>q;
    for(int i=0;i+1<n;i++)
    {
        b[i]=a[i+1]-a[i];
    }
    l[1]=1;
    for(int i=0;i+1<n;i++)
    {
        if(b[i]>b[i+1])
        {
            l[i+2]=1;
        }else{
            l[i+2]=b[i+1];
        }
    }
    r[1]=1;
    int cnt=2;
    for(int i=n-3;i>=0;i--)
    {
        if(b[i]<b[i+1])
        {
            r[cnt++]=1;
        }else{
            r[cnt++]=b[i];
        }
    }
    for(int i=1;i<n;i++) 
    {
        l[i+1]+=l[i];
        r[i+1]+=r[i];
    }
    // for(int i=0;i<n;i++) cout << l[i] << " ";
    // cout << "\n";
    while(q--)
    {
        int L,R;cin >> L >> R;
        if(L<R)
        {
            cout << l[R-1]-l[L-1] << "\n";
        }else{
            cout << r[n-R]-r[n-L] << "\n";
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
