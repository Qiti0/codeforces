#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

map<int,int> mp;
void slove()
{
    int n;cin >> n;
    mp.clear();
    n--;
    while(n--)
    {
        int a,b;cin >> a >> b;
        mp[a]++;
        mp[b]++;
    }
    int ans=0;
    for(auto it:mp)
    {
        if(it.second==1) ans++;
    }
    cout << (ans+1)/2 <<"\n";
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
