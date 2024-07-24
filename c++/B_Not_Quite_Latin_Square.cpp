#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

char a[5][5];
map<char,int> mp;
void slove()
{
    mp.clear();
    for(int i=0;i<3;i++)
        for(int j=0;j < 3;j++)
        {
            cin >> a[i][j];
            mp[a[i][j]]++;
        }
    for(auto it : mp)
    {
        if(it.second == 2) 
        {
            cout << it.first << "\n";
        }
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
