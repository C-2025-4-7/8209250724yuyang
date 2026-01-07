#include<iostream>
using namespace std;
class Point
{
private:
	int x, y;
public:
	Point(int X=60,int Y=80) {
		x = X;
		y = Y;
	}
	void setPoint(int i, int j) {
		x = x + i;
		y = y + j;
	}
	void display() {
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main() {
	Point point;
	cout << "坐标(x,y)的初始值为：";
	point.display();
	int i, j;
	cout << "请分别输入x、y的修正值i、j：" << endl;
	cin >> i >> j;
	point.setPoint(i, j);
	cout << "修改后的坐标值为：";
	point.display();
	return 0;
}