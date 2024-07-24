#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;


void slove()
{
    int a,b,c,d,e;cin >> a >>b >> c >> d>> e;
    int A,B,C,D;cin >> A>> B >> C >> D;
    int sum=0;
    sum+=(a*A)+(b*B)+(c*C)-(d*D);
    if(sum>e) cout << "YES" << "\n";
    else cout << "NO" << "\n";
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
