#include <bits/stdc++.h>
using namespace std;
const double pi =acos(-1);
const int N =1e5+10;
typedef long long ll;

void slove()
{
    int n;cin >> n;
    string s;cin >> s;
    char ans='?';
    ans=s[n-1];
    cout << ans << "\n";
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--)
    {
        slove();
    }
    return 0;
}