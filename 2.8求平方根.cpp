#include <iostream>
using namespace std;
int main() {
	double a,b,c;
	cout << "请输入一个数字：";
	cin >> a;
	c = a;
	do {
		b = (c + a / c) / 2.0; 
		c = b;
	} while (fabs(b-a/b)>1e-5);
	cout << "该数的平方根为：" << b << endl;
	return 0;
}