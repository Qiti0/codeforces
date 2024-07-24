#include <bits/stdc++.h>
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

struct St
{
    int su;
    int grade;
}st[N];
bool cmp(St x,St y)
{
    if(x.grade==y.grade) return x.su<y.su;
    return x.grade>y.grade;
}
void slove()
{
    int n,m;cin >> n >> m;
    for(int i=0;i<n;i++)
    {
        cin >> st[i].su >> st[i].grade;
    }
    sort(st,st+n,cmp);
    int flag = floor(double(m*1.5));
    int cnt=0,mgrade=0;
    for(int i=0;i<n;i++)
    {
        flag--;
        if(flag==0&&st[i].grade==st[i+1].grade)
        {
            flag++;
        }
        cnt++;
        if(!flag)
        {
            mgrade=st[i].grade;
            break;
        }
    }
    cout << mgrade << " " << cnt << '\n';
    for(int i=0;i<cnt;i++)  cout << st[i].su << " " << st[i].grade << "\n";
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