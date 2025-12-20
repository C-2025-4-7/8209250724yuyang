#include<iostream>
using namespace std;
void reorder(int *s, int size) {
	for (int i = 0; i < size-1; i++) {
		for (int j = 0; j < size-1-i; j++) {
			if (s[j] > s[j + 1]) {
				int temp;
				temp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = temp;
			}
		}
	}
}
int main() {
	int size;
	int* s = NULL;
	cout << "请输入数组元素个数：";
	cin >> size;
	if (size <= 0) {
		cout << "ERROR!!!元素个数必须大于0！" << endl;
		return 1;
	}
	s = new int[size];
	cout << "请输入数组元素："<<endl;
	for (int i = 0; i < size; i++) {
		cout << "元素[" << i << "]: ";
		cin >> s[i];
		cout << "  指针地址: " << (s + i)
			<< "  存储的值: " << *(s + i) << endl;
	}
	cout << "\n原始数组：" << endl;
	cout << "指针地址\t下标\t值" << endl;
	for (int i = 0; i < size; i++) {
		cout << (s + i) << "\t[" << i << "]\t" << *(s + i) << endl;
	}
	reorder(s, size);
	cout << "\n排序后的数组：" << endl;
	cout << "指针地址\t下标\t值" << endl;
	for (int i = 0; i < size; i++) {
		cout << (s + i) << "\t[" << i << "]\t" << *(s + i) << endl;
	}
	delete[]s;
	s = NULL;
	return 0;
}