#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;


void slove()
{
    int k,g,m;cin >> k >> g >> m;
    int glass=0,mug=0;
    while(k)
    {
        if(glass==g) glass=0,k--;
        else if(mug==0) mug=m,k--;
        else 
        {
            if(mug>=(g-glass)) mug-=(g-glass),glass=g;
            else glass+=mug,mug=0;
            k--;
        } 
    }
    cout << glass <<" "<< mug << "\n";
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
