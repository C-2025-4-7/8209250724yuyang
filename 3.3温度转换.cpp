#include<iostream>
using namespace std;
#include"mytempreture.h";
#include<iomanip>
int main()
{
	int a,b;
	cout << "请选择输入的温度单位类型：\n1.摄氏度\t2.华氏度" << endl;
	cin >> a;
	cout << "请输入温度数值：" << endl;
	cin >> b;
	switch (a)
	{
	case 1:
		cout << "该温度转化为华氏度后为：";
		std::cout << std::fixed << std::setprecision(2) << celsius_to_fah(b) << std::endl; break;
	case 2:
		cout << "该温度转化为摄氏度后为：";
		std::cout << std::fixed << std::setprecision(2) << fahrenheit_to_cels(b) << std::endl; break;
	}
	return 0;
}