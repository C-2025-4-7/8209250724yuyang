#include<iostream>
using namespace std;
int main() {
	int n = 1;
	for (int i = 1; i < 11; i++) {//第十天吃完只剩最后一个桃子，就是第十一天吃之前就只有一个桃子
		int rem = (n + 1) * 2;//递归往前推前一天吃之前有多少个桃子
		n = rem;
	}
	cout << "猴子第一天摘的桃子的总数为" << n << "个" << endl;
	return 0;
}