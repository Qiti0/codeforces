#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

vector<int> a;
map<int ,int> mp;
void slove()
{
    a.clear();
    mp.clear();
    int n,k;cin >> n >> k;
    int mmax=0;
    for(int i=0;i<n;i++)
    {
        int x;cin >> x;
        a.push_back(x);
        mp[x]=1;
        mmax=max(mmax,x);
    }
    int sum=0;
    string ans="NO";
    for(int i=1;i<=max(k,mmax);i++)
    {
        if(mp[i]==0) sum+=i,mp[i]=1;
        if(i==mmax)
        {
            // cout << sum <<"\n";
            if(sum>k)
            {
                ans="NO";
                break;
            }else if(sum==k){
                ans="YES";
                break;
            }
        }else if(i>mmax)
        {
            if(sum==k)
            {
                ans="YES";
                break;
            }
            else if(sum>k) 
            {
                ans="NO";
                break;
            }
        }

    }
    cout << ans << "\n";
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
