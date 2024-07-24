#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;


void solve()
{
    int n,m,k;cin >> n >> m >> k;
    string ans;
    if(n+m<=k)
    {
        if((k-n-m+1)&1)
        {
            ans="YES";
        }else{
            ans="NO";
        }
    }else{
        ans="NO";
    }
        cout <<ans << "\n";
    if(ans=="YES")
    {
        
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(j&1)
                {
                    cout << "R" << " ";
                }else{
                    cout << "B" <<" ";
                }
            }
            cout << "\n";
        }
        char r,b;
        if(m&1) 
        {
            r='R';b='B';
        }else {
            r='B';b='R';
        }
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i&1)
                {
                    cout << r << " ";
                }else{
                    cout << b <<" ";
                }
            }
            cout << "\n";
        }
    }
}
int main()
{
    // std::ios::sync_with_stdio(false);
    // std::cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
