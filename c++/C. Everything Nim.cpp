#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}


void solve()
{
    int n;cin >> n;
    set <int> st;
    vector <int> a(n);
    int mx = 0;
    for(int i = 0;i < n;i ++){
        cin >> a[i];
        st.insert(a[i]);
        mx = max(a[i],mx);
    }

    if(st.size() == 2){
        int a1 = *st.begin();
        st.erase(st.begin());
        int a2 = *st.begin();
        if(a1 == 1 && a2 != 1){
            cout << "Bob" << "\n";
            return;
        }
    }
    int idx = 1;
    for(auto it : st){
        idx += idx == it;
    }
    idx -= 1;
    if(idx % 2 == 0){
       if(idx == mx){
            cout  << "Bob" << "\n";
       }else{
            cout << "Alice" << "\n"; 
       }
    }else{
        if(idx != mx){
            cout  << "Bob" << "\n";
        }else{
            cout << "Alice" << "\n"; 
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
        solve();
    }
    return 0;
}
