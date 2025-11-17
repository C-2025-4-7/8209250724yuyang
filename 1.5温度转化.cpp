#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float F;
	cout << "请输入华氏温度：" ;
	cin >> F;
	cout << fixed << setprecision(2);
	cout << "对应的摄氏温度为：" << (F - 32) * 5 / 9 << endl;
	return 0;
}