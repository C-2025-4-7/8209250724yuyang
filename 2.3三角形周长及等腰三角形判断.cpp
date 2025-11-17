#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "请输入三角形的三条边长：";
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a) {
		if (a == b || b == c || c == a)
			cout << "三角形的周长为：" << a + b + c << '\t' << "等腰三角形" << endl;
		else
			cout << "三角形的周长为：" << a + b + c << '\t' << "非等腰三角形" << endl;
	}
	else
		cout << "无法构成三角形" << endl;
	return 0;
}