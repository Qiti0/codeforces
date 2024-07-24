#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

map<int,int> mp;
void slove()
{
    mp.clear();
    int a,b,c;
    cin >> a >> b >> c;
    mp[a]++,mp[b]++,mp[c]++;
    for(auto it :mp)
    {
        if(it.second<=1) cout << it.first << '\n';
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
