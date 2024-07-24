#include <bits/stdc++.h>
using namespace std;
const double pi = acos(-1);
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int,int> pii;

class cdate{
private:
    int y,m,d;
public:
    cdate(int yy,int dd,int mm){y=yy,d=dd,m=mm;}
    virtual void port(){printf("%02d年%02d月%02d日\n",y,m,d);}
};
class cstudent
{
private:
    char sno[10];
    string sname;
    char sex;
    cdate date;
    int *age;
    static int scount;
public:
    cstudent(char *snol,string snamel,char sexl,cdate datel,int agel=18):date(datel)
    {
        strcpy(sno,snol) ;
        sname=snamel;
        sex=sexl;
        age=new int (agel);
        scount++;
    }
    cstudent(cstudent &s):date(s.date){
        strcpy(sno,s.sno) ;
        sname=s.sname;
        sex=s.sex;
        age=new int (*(s.age));
        scount++;
    }
    char *getsno(){return sno;}
    string getsname(){return sname;}
    char getsex(){return sex;}
    cdate &getdate(){return date;}
    int getage(){return *age;}
    static int getscount(){return scount;}
    void port(){cout << "学号: " << sno << " 姓名: " << sname << "\n年龄: " << *age << " 性别: " << sex<<"\n日期: ";date.port();}
    ~cstudent(){scount--;}
};
int cstudent::scount=0;

class ccourse
{
private:
    string cno;
    string cname;
public:
    ccourse(string cnol,string cnamel){cno=cnol,cname=cnamel;}
    string getcno(){return cno;}
    string getcname(){return cname;}
    ccourse(ccourse &c){cno=c.cno,cname=c.cname;}
    void port(){cout << "课程编号: "<<cno << " 课程名称: " << cname <<"\n";}
};
class cgrade
{
private:
    cstudent s;
    ccourse c;
    double grade;
public:
    cgrade(cstudent ss,ccourse cc,double ggrade):s(ss),c(cc),grade(ggrade){}
    cstudent &getcstudent(){return s;}
    ccourse &getccourse(){return c;}
    double getgrade(){return grade;}
    void port(){s.port(),c.port();cout << "成绩为: " << grade << "\n";}
};
int main()
{
    // std::ios::sync_with_stdio(false);
    // std::cin.tie(nullptr);
    cdate date (1999,6,6);
    cstudent s1("239074314","liewei",'m',date,120);
    ccourse c1("700199","C++");
    cgrade cg1(s1,c1,90);
    cg1.port();   
    return 0;
}