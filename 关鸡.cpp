#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 1e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

struct place
{
    int x,y;
}p[N];

map <pii ,int> mp;
int d[3] = {0 , 1, -1};
void solve()
{
    int n;cin >> n;
    mp.clear();
    int c = 0;
    for(int i = 0;i < n;i ++)
    {
        cin >> p[i].y >> p[i].x;
        mp[make_pair(p[i].x,p[i].y)] ++;
        if(p[i].x == 0) c = 1;
    }
    int l = 0,r = 0,z = 0,y = 0;
    for(int i = 0;i < n;i ++)
    {
        int x = p[i].x;
        int y = p[i].y;
        y = y == 1 ? 2 : 1; 
        if(x <= 0)
        {
            l = max(l , 1);
            for(int j = 0;j < 3;j ++)
            {
                if(x + d[j] < 0 && mp[{x + d[j],y}])
                {
                    l = 2;
                }
            }
        }else if(x >= 0)
        {
            r = max(r , 1);
            for(int j = 0;j < 3;j ++)
            {
                if(x + d[j] > 0 && mp[{x + d[j],y}])
                {
                    r = 2;
                }
            }
        }
    } 
    if(mp[{-1,1}]) z = 1;
    if(mp[{1,1}]) y = 1;
    int ans = 3;
    // cout << 4 - (l + r) <<" " << 3 - (z + c + y) << "&&\n"; 
    ans = min({ans,4 - (l + r),3 - (z + y + c)});
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
        solve();
    }
    return 0;
}
