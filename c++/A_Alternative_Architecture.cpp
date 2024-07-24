#include <bits/stdc++.h>
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
void check(int x,int y)
{
    int a=sqrt(x*x-y*y);
    // cout << a << "\n";
    if((a*a)==(x*x-y*y)) cout << a << '\n';
    // return 0;
    // return 1;
}

void slove()
{
    int n,m;cin >> n >> m;
    n=max(n,m);
    m=min(n,m);
    int ans=0;
    for(int i=n-1,j=1;i>=1;i--,j++)
    {
        // if(check(n,i)&&check(m,j)) ans++;
        check(n,i);
        if(j<=m)check(m,j);
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
        slove();
    }
    return 0;
}