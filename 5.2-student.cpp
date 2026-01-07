#include <iostream>
#include"5.2-student.h"
using namespace std;
Student::Student() {
    num = 0;
    name[0] = '\0';
    sex = '\0';
}
Student::Student(int nu, const char* nm, char se) {
    num = nu;
    int i = 0;
    while (nm[i] != '\0' && i < 19) {
        name[i] = nm[i];
        i++;
    }
    name[i] = '\0';
    sex = se;
}
void Student::set_value(int nu, const char* nm, char se) {
    num = nu;
    int i = 0;
    while (nm[i] != '\0' && i < 19) {
        name[i] = nm[i];
        i++;
    }
    name[i] = '\0';
    sex = se;
}
void Student::display()
{
    cout << "num:" << num << endl;
    cout << "name:" << name << endl;
    cout << "sex:" << sex << endl;
}