#include <iostream>
using namespace std;
class emp{
private:
int sno;string sname;int age;double salary;
public:
emp(int sno,string sname,int age,double salary){
this->sno=sno;this->sname=sname;this->age=age;
this->salary=salary;
}
emp(emp &e):sno(e.sno),sname(e.sname),age(e.age),salary(e.salary){}
friend ostream &operator<<(ostream &out,emp &e)
{
    out << e.sno << " "<<e.sname <<" "<<e.age << " "<< e.salary<<"\n";
    return out;
}
};
int main()
{
    emp A (123,"liwei",43,8000);
    emp B (A);
    cout << B;   
    return 0;
}