#include <bits/stdc++.h>
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

class shape1
{
    public:
    virtual double getarea()=0;

};
class shape2
{
    public:
    virtual double getperemeter()=0;
};
class Circle:public shape1,public shape2
{
    private:
    int r;
    const double PI;
    public:
    Circle(double rr):PI(3.14){r=rr;}
    virtual double getarea(){return PI*r*r;}
    virtual double getperemeter(){return 2*PI*r;}
};
class Rect:public shape1,public shape2
{
    private:
    int w,l;
    public:
    Rect(double ww,double ll){w=ww,l=ll;}
    double getarea(){return w*l;}
    double getperemeter(){return 2*(w+l);}
};
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    return 0;
}