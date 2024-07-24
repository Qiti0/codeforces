#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 1e3 + 10;
typedef long long ll;
typedef pair<int,int> pii;

int a[N][N];
int ans[N];
void slove()
{
    int n;cin >> n;
    string ANS="YES";
    for(int i=0;i<n;i++)
    {
        ans[i]=1073741823;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> a[i][j];
            if(i!=j) ans[i]&=a[i][j];
        }
    }
    // for(int i=0;i<n;i++) cout << ans[i] << " ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j&&a[i][j] != (ans[i]|ans[j]))
            {
                ANS="NO";
            }
            // if(i!=j) cout << (ans[i]|ans[j]) <<" ";
            // else cout << "0" << " ";
        }
        // cout << "\n";
    }
    if(ANS=="YES") 
    {
        cout << ANS << "\n";
        for(int i=0;i<n;i++) cout << ans[i] << " ";
        cout << "\n";
    }else{
        cout << ANS << "\n";
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
