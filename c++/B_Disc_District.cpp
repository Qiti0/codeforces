#include <bits/stdc++.h> 
using namespace std;
const int mod = 2e5+10;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;


void solve()
{
   int n;string s;cin >> n >> s;
   int ans=0,cnt=0;
	for(int i=0;i<n;++i)
	{
		if(s[i]=='0')
		{
			if(cnt)
			{
				ans++;
				cnt--;
			}
		}
		else
		{
			ans++;
			cnt=2;
		}
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
