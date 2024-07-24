#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

int a[N];
vector<int> b;
void slove()
{
    ll n,m;cin >> n >> m;
    ll ans=0;
    b.clear();
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
        ans+=a[i];
    }
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
