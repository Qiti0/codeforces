#include <bits/stdc++.h>
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

void slove()
{   
}
int mmax(int a,int b)
{
    // return max(a,b);
    return a>b?a:b;
}
int mmax(int a,int b,int c)
{
    // return a>b?max(a,c):max(b,c);
    return max({a,b,c});
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
    int a,b,c;
    a=1,b=2,c=3;
    cout << mmax(a,b) << " " << mmax(a,b,c) << "\n";
    return 0;
}