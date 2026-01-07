#include<iostream>
#include"5.2-student.h"
using namespace std;
int main() {
	Student stud;
	stud.set_value(1, "lcg", 'f');
	stud.display();
	Student stud1(7, "tcg", 'm');
	stud1.display();
	return 0;
}