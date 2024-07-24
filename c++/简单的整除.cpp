#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

int a[4]={2,3,5,7};
void slove()
{
    int n;cin >> n;
    int ans=0;
    for(int i=0;i<4;i++)
    {
        if(n%a[i]==0)
        {
            ans=1;
        }
    }
    if(ans) cout << "YES" << '\n';
    else cout << "NO" << "\n";
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
