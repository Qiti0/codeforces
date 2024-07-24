#include <bits/stdc++.h>
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;

map<int,int> mp;
int a[N];
void slove()
{
    int n;cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
        mp[a[i]]=i;
    }
    if(mp[n]>max(mp[1],mp[2])) 
    {
        cout << mp[n] << " " << max(mp[1],mp[2]) << "\n";
    }
    else if(mp[n]<min(mp[2],mp[1])) 
    {
        cout << mp[n] << " " << min(mp[1],mp[2]) << "\n";
    }
    else 
    {
        cout << mp[1] << " "<< mp[2] << "\n";
    }
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