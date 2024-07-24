#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;


void slove()
{
    string s1,s2;cin >> s1 >> s2;
    int a=abs(s1[1]-s1[0])>=3?5%abs(s1[1]-s1[0]):abs(s1[1]-s1[0]);        
    int b=abs(s2[1]-s2[0])>=3?5%abs(s2[1]-s2[0]):abs(s2[1]-s2[0]);
    // cout <<a << " " << b << "\n";
    if(a==b) cout << "Yes" << "\n";
    else cout << "No" <<"\n";
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
