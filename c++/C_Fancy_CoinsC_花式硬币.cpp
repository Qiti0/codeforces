#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;


void slove()
{
int m,k,a1,ak;
		cin>>m>>k>>a1>>ak;
		int ans=0;
		int r=m%k;
		if(r<=a1){
			a1-=r;
		}else{
			ans+=r-a1;
			a1=0;
		}
		m-=r;
		ak+=a1/k;
		if(m/k>ak){
			ans+=m/k-ak;
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
