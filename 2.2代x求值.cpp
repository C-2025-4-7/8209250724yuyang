#include <iostream>
using namespace std;
int main() {
	float x;
	cout << "x=";
	cin>> x;
	if (x < 5)
		if (x < 1) {
			cout <<"y=" << 3 - 2 * x << endl;
		}
		else
			cout << "y=" << 2 / (4 * x) + 1 << endl;
	else
		cout << "y=" << x * x << endl;
	return 0;
}