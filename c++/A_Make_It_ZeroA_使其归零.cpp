#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

int a[N];
void slove()
{
    int n;cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    if(n&1)
    {
        cout << 4<<"\n";
        cout << 1<<" "<< n << '\n';
        cout << 1 <<" "<< 2 << '\n';
        cout << 2 <<" "<< n << '\n';
        cout << 2 << " "<< n << '\n';
    }else{
        cout << 2 << '\n';
        cout << 1 << " " << n << "\n";
        cout << 1 << " " << n << '\n';
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
