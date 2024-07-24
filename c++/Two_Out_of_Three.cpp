#include <bits/stdc++.h>
using namespace std;
const double pi =acos(-1);
const int N =1e5+10;
typedef long long ll;

map<int,int> mp;
int a[N],b[N];
void slove()
{
    int n;cin >> n;
    mp.clear();
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        b[i]=1;
        mp[a[i]]++;
    }
    int cnt=0;
    for(map<int,int> :: iterator it=mp.begin(); it!=mp.end();it++)
    {
        if(it->second>=2) cnt++;
    }
    if(cnt<2) {
        cout << -1 << "\n";
        return ;
    }
    int flag=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[j]==a[i]&&mp[a[i]]>1)
            {
                mp[a[i]]=0;
                b[j]=2;
                if(flag) b[j]=3;
                flag=1;
                break;
            }
        }
    }
    for(int i=0;i<n;i++) cout << b[i] << ' ';
    cout << "\n";

}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--)
    {
        slove();
    }
    return 0;
}