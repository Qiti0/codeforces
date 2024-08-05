#include <bits/stdc++.h> 
using namespace std;
const int mod = 1e9+7;
const double pi = acos(-1.0);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;
inline int lowbit(int x) {return x & (- x);}

struct bwl
{
    string name;
    int len;
    string s[20];
    bool operator < (const bwl x) const{
        return name < x.name;
    }
};

map <string,int> mp;


void solve()
{
    int n;cin >> n;
    vector <bwl> a(n);
    for(int i = 0;i < n;i ++) {
        string nm;cin >> nm;
        a[i].name = nm;
        if(!mp[nm]) mp[nm] = mp.size() + 1;
        int len;cin >> len;
        a[i].len = len;
        // cl(ss,a[i].s);
        for(int j = 0;j < len;j ++){
            cin >> a[i].s[j];
        }
    }
    sort(a.begin(),a.end());
    // for(auto it : a){
    //     cout << it.name << " " << it.len << " ";
    //     for(int i = 0;i < it.len;i ++){
    //         cout << it.s[i] << " ";
    //     }
    //     cout << "\n";
    // }
    set <string> st[25];
    for(auto &it : a){
        int idx = mp[it.name];
        for(int i = 0;i < it.len;i ++){
            st[idx].insert(it.s[i]);
        }
    }
    for(auto it : mp){
        for(auto &is : st[it.second]){
            string t;
            // cout << is << "\n";
            for(int i = is.length() - 1;i >= 1;i --){
                t.insert(0,1,is[i]);
                // cout << t << " ";
                auto idx = st[it.second].find(t);
                if(idx != st[it.second].end()){
                    if(st[it.second].size()) st[it.second].erase(idx);
                }
            }
            // cout << "\n";
        }
    }  
    cout << mp.size() << "\n";
    for(auto it : mp){
        cout << it.first << " " << st[it.second].size() << " ";
        for(auto is : st[it.second]){
            cout << is << " ";
        }
        cout << "\n";
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
        solve();
    }
    return 0;
}
