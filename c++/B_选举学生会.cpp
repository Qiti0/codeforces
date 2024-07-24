#include <bits/stdc++.h>
using namespace std;
const double pi = acos(-1);
const int N = 2e6 + 10;
typedef long long ll;
typedef pair<int,int> pii;

int a[N];
void slove()
{
    int n,m;cin >> n >> m;
    for(int i=0;i<m;i++) cin >> a[i];
    sort(a,a+m);
    for(int i=0;i<m;i++) cout << a[i] << " ";
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