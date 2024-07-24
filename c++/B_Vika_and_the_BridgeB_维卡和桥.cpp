#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

int a[N];
int n,k;
bool check(int m)
{
    int flag=0;
    for(int i=m;i+(m+1)<n;i+=(m+1))
    {
        if(a[i]!=a[i+(m+1)]) flag++;
    }
    if(flag>1) return false;
    return true;
}
void slove()
{
    cin >> n >> k;
    for(int i=0;i<n;i++) cin >> a[i];
    int l=0,r=n,mid=0;
    while(l<r)
    {
        mid=(l+r)/2;
        if(check(mid))
        {
            r=mid;
        }else{
            l=mid+1;
        }
    }
    cout << mid << '\n'; 
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
