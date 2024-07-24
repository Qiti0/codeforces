#include <iostream>
using namespace std;
class Point{
private:
double x,y;static int c;
public:
Point():x(0),y(0){};
Point(double xx,double yy):x(xx),y(yy){}
Point(Point & o){x=o.x;y=o.y;c++;}
double getX() {return x;}
double getY(){return y;}
friend ostream& operator <<(ostream &out ,Point &p)
{
    out << p.x <<" "<<p.y <<"\n";
    return out;
}
~Point(){c--;}
static void showC(){cout << c;}
};
int Point::c=0;
class Circle{
private:
Point p;double r;const double PI;
public:
Circle(Point p1,double rr):p(p1),r(rr),PI(3.14){}
double getArea(){return PI*r*r;}
};
class Rect{
private:
Point p1,p2; double w,h;
public:
Rect(Point pp1,Point pp2){w=abs(pp1.getX()-pp2.getX());h=abs(pp1.getY()-pp2.getY());}
Rect(Rect &r):p1(r.p1),p2(r.p2),w(r.w),h(r.h){}
};

int main(){
    Point A;
    Point B(1,2);
    cout << A << B;
    return 0;
}
