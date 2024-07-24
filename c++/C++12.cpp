#include <iostream>
#include <string.h>
using namespace std;

class Cat{
private:
char *name;
int *age;
public:
Cat(char a[],int aage){age=new int (aage);int n=strlen(a);name=new char[n],strcpy(name,a);}
Cat(Cat &cat){age=new int(*(cat.age));int n=strlen(cat.name);name=new char[n],strcpy(name,cat.name);}
~Cat(){delete name;cout << "xigou" << "\n";}
void getname(){cout << name << "\n";}
friend ostream &operator<<(ostream &out,Cat &cat)
{
    out << cat.name<<" " <<*(cat.age)<< "\n"; 
    return out;
}
};

int main()
{
    char name[]={'1','2','3'};
    // cout << name << "\n";
    Cat a(name,11);
    Cat b(a);
    a.getname();
    cout << a ;
    cout << b;
    return 0;
}