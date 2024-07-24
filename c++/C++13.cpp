#include <iostream>
using namespace std;

class XLC{
private:
int *a;int len;
public:
XLC(int len=0,int *A=new int ()){this->len=len;a=new int[len];
    for(int i=0;i<len;i++)
    {
        // if(A==NULL) A[i]=0;
        this->a[i]=A[i];
    }
}
XLC(XLC &x){this->len=x.len;a=new int[len];
    for(int i=0;i<len;i++)
    {
        this->a[i]=x.a[i];
    }
}
// ~XLC(){cout << "diaoyong" << "\n";}
XLC operator +(XLC x2) {
    XLC t(this->len>x2.len?this->len:x2.len);
    for(int i=0;i<(this->len<x2.len?len:x2.len);i++){
        t.a[i]=this->a[i]+x2.a[i];
    }
    return t;
}
XLC operator -(XLC x2){
    XLC t(this->len>x2.len?len:x2.len);
    for(int i=0;i<(this->len<x2.len?len:x2.len);i++)
    {
        t.a[i]=this->a[i]-x2.a[i];
    }
    return t;
}
XLC &operator =(XLC &x2){
    if(this==&x2) return *this;
    delete []a;
    len=x2.len;
    this->a=new int [this->len];
    for(int i=0;i<x2.len;i++)
    {
        this->a[i]=x2.a[i];
    }
    return *this;
}
friend istream &operator >>(istream &in,XLC &xlc)
{
    cout << "输入个数"<<"\n";
    in >> xlc.len;
    cout << "输入坐标" << "\n";
    for(int i=0;i<xlc.len;i++)
    {
        in >> xlc.a[i];
    }
    return in;
} 
friend ostream &operator<<(ostream &out,XLC &xlc){
    for(int i=0;i<xlc.len;i++)
    {
        out << xlc.a[i] << " ";
    }
    out <<"\n"<< xlc.len<< "\n";
    return out;
}
};

int main()
{
    // int A[10]={0,2,3,4,5,6,7,8,9,10};
    // XLC a(10,A);
    // cout << a;
    // XLC f(13);
    // cout << f ;
    // XLC b(a);
    // cout << b;
    // XLC c;
    // cout << c;
    // c=b;
    // cout << c;
    // XLC d=a+b;
    // cout << d;
    // XLC e=d+b;
    // cout << e;
    // c=f;
    // f=e;
    // cout << f;
    // cout << c;
    XLC x;
    cout << x;
    cin >> x;
    XLC y;
    XLC z;
    y=x;
    XLC d=(x+y);
    z=d;
    cout << x << y<<z ;
    return 0;
}