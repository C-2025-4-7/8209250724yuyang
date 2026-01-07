#include<iostream>
using namespace std;
class Student
{
private:
	int No;
	double Score;
public:
    void set_value(int n, double s) {
        No = n;
        Score = s;
    }
    int get_No() {
        return No;
    }
    double get_Score() {
        return Score;
    }
    void Show_max() {
        cout << "学号：" << No << "成绩：" << Score << endl;
    }
};
void max(Student* stu) {
    Student* max_stu = &stu[0];
    double max_score = stu[0].get_Score();
    for (int i = 1; i < 5; i++) {
        if (stu[i].get_Score() > max_score) {
            max_score = stu[i].get_Score();
            max_stu = &stu[i];
        }
    }
    cout << "成绩最高的学生为：" << endl;
    max_stu->Show_max();
}
int main() {
    Student stu[5];
    stu[0].set_value(110, 59.9);
    stu[1].set_value(111, 88.8);
    stu[2].set_value(112, 66.6);
    stu[3].set_value(113, 95.5);
    stu[4].set_value(114, 51.4);
    max(stu);
    return 0;
}