#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

int a[20];
void slove()
{
    int n,d;cin >> n >>d;
    int sum=0;
    for(int i=0;i<n;i++) cin >> a[i],sum+=a[i];
    double avg=sum/d;
    for(int i=0;i<n;i++)
    {
        int now=a[i];
        int old=a[i];
        for(int j=0;j<n;j++)
        {
            if(abs(now-avg+a[j])<abs(old-avg))
            {
                old=now;
                now+=a[j];
            }
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
        slove();
    }
    return 0;
}
