#include <iostream>
#include <string>
using namespace std;
class Employee {
public:
    Employee(string name, string street_address, string city, string zip_code)
        : name_(name), street_address_(street_address), city_(city), zip_code_(zip_code) {}
    void display() {
        cout << "姓名： " << name_ << endl;
        cout << "街道地址： " << street_address_ << endl;
        cout << "城市： " << city_ << endl;
        cout << "邮编： " << zip_code_ << endl;
    }
    void change_name(const string& new_name) {
        name_ = new_name;
    }
private:
    string name_;
    string street_address_;
    string city_;
    string zip_code_;
};
int main() {
    Employee employee("gxw","安徽工业大学秀山校区","马鞍山","0555 243000");
    employee.display();
    employee.change_name("郭晓文");
    employee.display();
    return 0;
}
