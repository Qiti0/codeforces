#include <bits/stdc++.h> 
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

void merge(const int *a,size_t alen,const int *b,size_t blen,int *c)
{
    size_t i=0,j=0,k=0;
    while(i<alen&&j<blen)
    {
        a[i]<b[j]?c[k++]=a[i++]:c[k++]=b[j++];
    }
    for(;i<alen;i++,k++) c[k]=a[i];
    for(;j<blen;j++,k++) c[k]=b[j];
}
// void merge(const int *a, size_t aLen, const int *b, size_t bLen, int *c) {
//   size_t i = 0, j = 0, k = 0;
//   while (i < aLen && j < bLen) {
//     if (b[j] < a[i]) {  // <!> 先判断 b[j] < a[i]，保证稳定性
//       c[k] = b[j];
//       ++j;
//     } else {
//       c[k] = a[i];
//       ++i;
//     }
//     ++k;
//   }
//   // 此时一个数组已空，另一个数组非空，将非空的数组并入 c 中
//   for (; i < aLen; ++i, ++k) c[k] = a[i];
//   for (; j < bLen; ++j, ++k) c[k] = b[j];
// }
void merge_sort(int *a,int l,int r)
{
    if(r-l<=1) return ;
    int mid=l+((r-l)>>1);
    merge_sort(a,l,mid);
    merge_sort(a,mid,r);
    int tmp[11]={};
    merge(a+l,a+mid,a+mid,a+r,tmp+l);
    for(int i=l;i<r;++i) a[i]=tmp[i];
}
// void merge_sort(int *a, int l, int r) {
//   if (r - l <= 1) return;
//   // 分解
//   int mid = l + ((r - l) >> 1);
//   merge_sort(a, l, mid), merge_sort(a, mid, r);
//   // 合并
//   int tmp[1024] = {};  // 请结合实际情况设置 tmp 数组的长度（与 a 相同），或使用
//                        // vector；先将合并的结果放在 tmp 里，再返回到数组 a
//   merge(a + l, a + mid, a + mid, a + r, tmp + l);  // pointer-style merge
//   for (int i = l; i < r; ++i) a[i] = tmp[i];
// }
void solve()
{
    int a[10]={1,4,3,3,1,4,68,34,9,0};
    merge_sort(a,0,10);
    for(int i=0;i<10;i++) cout << a[i] << " ";
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
