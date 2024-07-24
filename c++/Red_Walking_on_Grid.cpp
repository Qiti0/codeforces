#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 1e6 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}


char g[2][N];
int vis1[2][N];
int vis2[2][N];
int n;
int ans = 0;
int res1,res2;
int dx1[] = {0,1,0,-1};
int dy1[] = {1,0,-1,0};
int dx2[] = {0,1,0,-1};
int dy2[] = {-1,0,1,0};
void dfs1(int x,int y){
    vis1[x][y] = 1;
    for(int i = 0;i < 4;i ++){
        int nx = x + dx1[i];
        int ny = y + dy1[i];
        if(nx < 2 && nx >= 0 && ny < n && ny >= 0 && g[nx][ny] == 'R' && !vis1[nx][ny]){
            res1 ++;
            ans = max(res1,ans);
            cout <<nx <<" "  << ny <<" "<< res1 << "\n";
            dfs1(nx,ny);
        }
    }
}
void dfs2(int x,int y){
    vis2[x][y] = 1;
    for(int i = 0;i < 4;i ++){
        int nx = x + dx2[i];
        int ny = y + dy2[i];
        if(nx < 2 && nx >= 0 && ny < n && ny >= 0 && g[nx][ny] == 'R' && !vis2[nx][ny]){
            res2 ++;
            ans = max(res2,ans);
            cout <<nx <<" "  << ny <<" "<< res2 << "\n";
            dfs2(nx,ny);
        }
    }
}
void solve()
{
    cin >> n;
    int cnt1 = 0;
    int cnt2 = 0;
    for(int i = 0;i < 2;i ++){
        for(int j = 0;j < n;j ++){
            cin >> g[i][j];
            if(g[i][j] == 'R'){
                cnt1 ++;
            }
            if(g[i][j] == 'W'){
                cnt2 ++;
            }
        }
    }

    if(cnt1 == 2 * n){
        cout << 2 * n - 1 << "\n";
        return;
    }else if(cnt2 == 2 * n){
        cout << 0 << "\n";
        return;
    }
    for(int j = 0;j < n;j ++){
        if(g[0][j] == 'R' && !vis1[0][j]){
            dfs2(0,j);
            // ans = max(res,ans);
        }

        // if(g[1][j] == 'R' && !vis2[1][j]){
        //     dfs1(1,j);
        // }
    }
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
