#include<iostream>
using namespace std;
bool is_prime(int num) {
	if (num != 1) {
		for (int i = 2; i < num; i++) {
			if (num % i == 0 && i != num) {
				return false;
			}
		}
		return true;
	}
	return true;
}
int main() {
	int a = 0;
	cout << "200以内的所有素数有：" << endl;
	for (int i = 1; i <= 200; i++) {
		if (is_prime(i)) {
			cout << i<<"\t";
			a++;
			if (a % 10 == 0) {
				cout << endl;
			}
		}
	}
	return 0;
}