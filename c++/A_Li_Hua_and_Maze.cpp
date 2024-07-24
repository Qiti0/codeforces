#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;


void slove()
{
    int m,n;cin >> n >> m;
    int x1,y1,x2,y2;cin >> x1 >> y1 >> x2 >> y2;
    int ans1=4,ans2=4;
    if(x1==1||x1==n)
    {
        ans1--;
        if(y1==1||y1==m)
        {
            ans1--;
        }
    }else if(y1==1||y1==m)
    {
        ans1--;
    }
    if(x2==1||x2==n)
    {
        ans2--;
        if(y2==1||y2==m)
        {
            ans2--;
        }
    }else if(y2==1||y2==m)
    {
        ans2--;
    }
    cout << min(ans1,ans2) << "\n";
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
