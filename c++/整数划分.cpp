#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

vector<int> a;
void slove()
{
    int n;cin >> n;
    a.clear();
    int sum=0;
    for(int i=1;;i++)
    {
        sum+=i;
        if(sum<=n) a.push_back(i);
        else 
        {
            a.pop_back();
            sum-=(i+i-1);
            a.push_back(n-sum);
            break;
        }
    }
    for(auto it:a) cout << it << " ";
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
