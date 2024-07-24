#include <bits/stdc++.h>
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

vector<int> g[N];
int n,m;
void dfs()
{

}
void slove()
{
    cin >> n >> m;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin >> a >> b;
        g[a].push_back(b);
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<g[i].size();j++)
        {
            cout << i << "-->" << g[i][j] <<"\n";
        }
    }
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