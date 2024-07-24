#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

map<int,int> mp;
void slove()
{
    int n;cin >> n;
    int t,vi;
    while(n--)
    {
        cin >> t >> vi;
        if(t==1) 
        {
            mp[vi]++;
        }else 
        {
            int flag=1;
            for(int i=30;i>=0;i--)
            {
                if(vi)
                {
                    int cnt=min(vi>>i,mp[i]);
                    vi-=cnt<<i;
                }       
            }
            if(!vi) cout << "YES" << "\n";
            else cout << "NO" << '\n';
        }
    }
}
signed main()
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
