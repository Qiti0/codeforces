#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

char g[35][55];
int visd[35][55];
map <pii,string> mp;
string ans;
queue <pii> q;
void bfs()
{
    q.push({4,6});
    visd[4][6] = 1;
    while(q.size())
    {
        pii u = q.front();
        int x = u.first;
        int y = u.second;
        if(x == 1 && y == 1) break;
        q.pop();
        mp[{0,1}] = "R";
        mp[{0,-1}] = "L";
        mp[{-1,0}] = "U";
        mp[{1,0}] = "D";
        for(auto it : vector <pii> {{1,0},{0,-1},{0,1},{-1,0}})
        {
            int dx = x + it.first,dy = y + it.second;
            if(dx <= 4 && dx > 0 && dy > 0 && dy <= 6 && g[dx][dy] == '0' && visd[dx][dy] == 0)
            {
                q.push({dx,dy});
                ans += mp[{it.first,it.second}];
                visd[dx][dy] = 1;
            }
        }
    }
}
void solve()
{
    for(int i = 1;i <= 4;i ++)
    {
        for(int j = 1;j <= 6;j ++)
        {
            cin >> g[i][j];
        }
    }
    bfs();
    // reverse(ans.begin(),ans.end());
    cout << ans << "\n";
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
