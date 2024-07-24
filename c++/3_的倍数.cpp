#include <bits/stdc++.h>
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

int a[N];
bool cmp(int x,int y)
{
    return x>y;
}
void slove()
{
    int n;cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n,cmp);
    string ans="";
    string ant="";
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%3==0)
        {
            
            if(ans!="0") ans+=(a[i]+'0');
        }
        else{
            sum+=a[i];
            ant+=(a[i]+'0');
            if(sum%3==0)
            {
                if(ans!="0")ans+=ant;
                sum=0;
                ant="";
            }
        }
    }
    if(ans=="") ans="-1";
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