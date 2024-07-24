#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 1e3 + 10;
typedef long long ll;
typedef pair<int,int> pii;

int a[N][N];
map<int,int >mp;
void slove()
{
    int n,m;cin >> n >> m;
    int ans=0;
    mp.clear();
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            cin >> a[i][j];
            if(mp[a[i][j]]==0) mp[a[i][j]]=1;
        }
        for(auto it:mp) if(it.second) ans++;
    cout << ans << '\n';
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
