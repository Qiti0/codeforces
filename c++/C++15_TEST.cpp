#include "Point.h"
#include <iostream>
using namespace std;
int main()
{
    Point A(0,0);
    Point B(1,2);
    cout << A.getX()<<" "<<A.getY()<<"\n";
    cout << B.getX()<<" "<<B.getY()<<"\n";
    return 0;
}