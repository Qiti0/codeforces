#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

vector <int> ans;
void slove()
{
    int n,k;cin >> n >> k;
    int N=n;
    ans.clear();
    for(int i=1;i<=(N-k-1);i++)
    {
        ans.push_back(n--);
    }
    for(int i=1;i<=k+1;i++)
    {
        ans.push_back(i);
    }
    for(auto it:ans) cout << it << " ";
    cout << "\n";
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
