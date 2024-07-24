#include <bits/stdc++.h>
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

void slove()
{
    int n;cin >> n;
    if((n+1)%3==0||(n-1)%3==0)
    {
        cout << "First" << "\n";
    }
    else cout << "Second" << "\n"; 
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