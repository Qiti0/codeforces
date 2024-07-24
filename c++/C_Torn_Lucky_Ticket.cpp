#include <bits/stdc++.h>
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;

typedef pair<int, int> pii;
map<pii, int> mp;
string s[N];
int sum[N];
void slove()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    // for(int i=0;i<n;i++) cout << s[i] << " ";
    for (int i = 0; i < n; i++)
    {
        int len = s[i].size();
        for (int j = 1; j <= len - 1; j++)
        {
            sum[j] += s[i][j] - '0';
            mp[{sum[j], j}]++;
        }
        int t = len - 1;
        for (int j = len - 1; j >= 1; j++)
        {
            t++;
            sum[t] += s[i][j] - '0';
            mp[{sum[t], j}]++;
        }
    }
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        int len = s[i].size();
        int sum = 0;
        for (int j = 1; j <= len - 1; j++)
        {
            sum += s[i][j] - '0';
            ans += mp[{sum}];
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