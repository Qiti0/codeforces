#include <bits/stdc++.h>
using namespace std;
const double pi = acos(-1);
const int N = 2e6 + 10;
typedef long long ll;
typedef pair<int,int> pii;

int a[N];
map<int,int> mp;
void slove()
{
    int n,m;cin >> n >>m;
    for(int i=1;i<=n;i++) cin >> a[i];
    int l=1,r=1;
    mp[a[l]]++;
    m--;
    int dist=n+1;
    int ansl=0,ansr=0;
    while(r<=n)
    {
        while(mp[a[l]]>1) 
        {
            mp[a[l]]--;
            l++;
        }
        if(m==0)
        {  
            // cout << l << " " << r << "\n";
            if(dist>(r-l+1))
            {
                ansl=l;
                ansr=r;
                dist=r-l+1;
            }
        }
        r++;
        if(!mp[a[r]])
        {
            mp[a[r]]++;
            m--;
        }
        else if(mp[a[r]])
        {
            mp[a[r]]++;
        }
    }
    cout << ansl << " " << ansr << "\n";
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        slove();
    }
    return 0;
}