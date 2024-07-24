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
    int t,vi;
    while(n--)
    {
        cin >> t >> vi;
        if(t==1) 
        {
            mp[vi]++;
            if(mp[vi]>((1<<vi+1)-(1<<vi)))
            {
                mp[vi+1]++;
                mp[vi]-=(1<<vi+1)-(1<<vi);
            }
        }else 
        {
            int flag=1;
            for(int i=31;i>=0;i--)
            {
                if((vi>>i)&1!=0)
                {
                    if(!mp[i])
                    {
                        flag=0;
                        cout << "NO" << "\n";
                        return;
                    }
                }       
            }
            if(flag) cout << "YES" << "\n";
        }
    }
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
