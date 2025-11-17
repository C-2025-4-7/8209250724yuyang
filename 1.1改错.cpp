#include <iostream>        //开头缺少#
using namespace std;
int main() {               //m要小写
	int k = 1;             //k未定义
	int i = k + 1;
	cout << i++ << endl;
	int j = 1;             //重复定义i
	cout << j++ << endl;
	cout << "Welcome to C++!" << endl;
	return 0;
}