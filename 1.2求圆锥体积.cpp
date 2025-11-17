#include <iostream>
using namespace std;
int main()
{
	const float Pi = 3.14;
	float r,h;
	cout << "请分别输入圆锥底的半径和锥高：";
	cin >> r >> h;
	cout << "圆锥的体积是：" << Pi * r * r * h / 3 << endl;
	return 0;
}
