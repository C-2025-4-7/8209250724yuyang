#include<iostream>
using namespace std;
int main(){
	const int MAX_NUMS = 10;
	const int MAX_DIF = 10;
	cout << "Enter 10 numbers:";
	int num[MAX_DIF];
	int y = 0;
	for (int i = 0; i < MAX_NUMS; i++) {
		int x;
		cin >> x;
		bool found = false;
		for (int j = 0; j < y; j++) {
			if (num[j] == x) {
				found = true;
				break;
			}
		}
		if (!found) {
			num[y] = x;
			y++;
		}
	}
	cout << "The distinct numbers are:";
	for (int i = 0; i <= y; i++) {
		cout << num[i] << "\t";
	}
	return 0;
}