#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 1e8 + 10;
typedef long long ll;
typedef pair<int,int> pii;

map<pair<int,int>,int> mp;
void slove()
{
    mp.clear();
    int a,b;cin >> a >> b;
    int dx[8]={a,b,a,b,-a,-b,-a,-b};
    int dy[8]={b,a,-b,-a,b,a,-b,-a};
    int x1,x2,y1,y2;cin >> x1 >> y1 >>x2 >> y2;
    for(int i=0;i<8;i++)
    {
        int x11=x1+dx[i];
        int y11=y1+dy[i];
        // cout << x11 << " "<< y11 << "\n";
        if(mp[{x11,y11}]==0) mp[{x11,y11}]++;
    }
    for(int i=0;i<8;i++)
    {
        int x22=x2+dx[i];
        int y22=y2+dy[i];
        if(mp[{x22,y22}]) mp[{x22,y22}]++;
    }
    int ans=0;
    for(auto it: mp)
    {
        if(it.second>=2) ans++;
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
