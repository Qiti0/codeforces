#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 2e7 + 10;
typedef long long ll;
typedef pair<int,int> pii;

stack<int> st;
int a[N],ans[N],maxx[N];
void solve()
{
    int n;cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    for(int i = n;i >= 1;i--) maxx[i] = max(maxx[i + 1], a[i]);
    for(int i=1;i<=n;i++) cout << maxx[i+1] << " ";
    // for(int i=0;i<n;i++) cout << a[i] << " ";
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        st.push(a[i]);
        while(st.size()&&st.top()>maxx[i+1])
        {
            // ans[cnt++]=st.top();
            cout << st.top() <<" ";
            st.pop();
        }
    }
    while(st.size())
    {
        // ans[cnt++]=st.top();
        cout << st.top() << " ";
        st.pop();
    }
    // for(int i=0;i<n;i++) cout << ans[i] << " ";
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
