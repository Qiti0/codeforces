#include <bits/stdc++.h>
using namespace std;
const double pi = acos(-1);
const int N = 2e6 + 10;
typedef long long ll;
typedef pair<int,int> pii;

int a[N];
void slove()
{
    int n;cin >> n ;
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++) cout << a[i] << " ";
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