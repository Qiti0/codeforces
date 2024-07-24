#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

// vector<int> ans;
void slove()
{
    ll sum=0;
    int n;cin >> n;
    for(int i = 0;i < n;i++)
    {
        int a;cin >> a;
        sum+=a;
    }
    string ans="NO";
    ll ssum=sqrt(sum);
    if(ssum*ssum==sum) ans="YES";
    cout << ans << endl;
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
