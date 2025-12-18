#include<iostream>
using namespace std;
int main() {
	bool L[100] = { false };
	for (int S = 1; S < 100; S++) {
		for (int x = S; x < 100; x = x + S) {
			L[x] = !L[x];
		}
	}
	cout << "最后开着的柜子的编号有：";
	for (int i = 1; i < 100; i++) {
		if (L[i-1]) {
			cout << i-1 << " ";
		}
	}
	return 0;
}