#include <iostream>
using namespace std;
int main()
{
	char ch;
	cout << "请输入一个字符：";
	cin >> ch;
	if (ch >= 'a' && ch <= 'z') {
		char CH = ch - 32;
		cout << "转化为大写：" << CH << endl;
	}
	else {
		int nextch = ch - 32;
		cout << "后继字符的ASCII码为：" << nextch << endl;
		return 0;
	}
}