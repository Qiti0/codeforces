#include <bits/stdc++.h>
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;

class animal
{
public:
    int age;int weight;
    animal(int a,int w){age=a,weight=w;}
};
class horse:public animal{
public:
    horse(int a,int w):animal(a,w){}
    friend int get_add_age(animal *a1,animal *a2);
};
class lv:public animal{
public:
    lv(int a,int w):animal(a,w){};
    friend int get_add_age(animal *a1,animal *a2);
};
int get_add_age(animal *a1,animal *a2){return 0;}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        animal a(0,0),b(1,1);
        horse h(1,2);
        lv l(2,3);
    }
    return 0;
}