#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 1e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

struct node
{
    int i,value;
};
bool cmp(node x,node y)
{
    return x.value>y.value;
}
node a[N],b[N],c[N];
void slove()
{
    int n;cin >> n;
    for(int i=0;i<n;i++) cin >> a[i].value,a[i].i=i;
    for(int i=0;i<n;i++) cin >> b[i].value,b[i].i=i;
    for(int i=0;i<n;i++) cin >> c[i].value,c[i].i=i;
    sort(a,a+n,cmp);
    sort(b,b+n,cmp);
    sort(c,c+n,cmp);
    int ans=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                if(a[i].i!=b[j].i&&a[i].i!=c[k].i&&b[j].i!=c[k].i)
                {
                    ans=max(ans,a[i].value+b[j].value+c[k].value);
                }
            }
        }
    }
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
        slove();
    }
    return 0;
}
