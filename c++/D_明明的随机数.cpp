#include <bits/stdc++.h>
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

set<int> st;
void slove()
{
    int n;cin >> n;
    for(int i=0;i<n;i++)
    {
        int a;cin >> a;
        st.insert(a);
    }
    cout << st.size() << "\n";
    for(auto it=st.begin();it!=st.end();it++)
    {
        cout << *it << " ";
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