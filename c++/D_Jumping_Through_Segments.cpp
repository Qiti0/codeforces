#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
pii a[N];
int n;
int check(int mid)
{
    int l=0,r=0;
    for(int i=0;i<n;i++)
    {
        l-=mid,r+=mid;
        if(l>a[i].second||r<a[i].first)
        {
            return 0;
        }
        l=max(l,a[i].first),r=min(r,a[i].second);
    }
    return 1;
}
void slove()
{
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int l,r;cin >> l >> r;
        a[i].first=l;
        a[i].second=r;
    }
    int l=0,r=1e9,mid=0;
    int cnt=0;
    while(l<r)
    {
        mid=l+r>>1;
        if(check(mid))
        {
            r=mid;
        }
        else{
            l=mid+1;
        }
        // cout << r << "\n";
        // if(++cnt>=100) break;
    }
    cout << r << "\n";
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
