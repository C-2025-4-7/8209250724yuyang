#include<iostream>
using namespace std;
int greatest_common_divisor(int m, int n)
{
	if (m == 0 || n == 0)return 0;
	while (n != 0) {
		int o = m % n;
		m = n;
		n = o;
	}
	return m;
}
int main() {
	int m, n;
	cout << "请输入两个自然数：" << endl;
	cin >> m >> n;
	cout << "它们的最大公因数为：" << greatest_common_divisor(m, n) << endl;
	return 0;
}