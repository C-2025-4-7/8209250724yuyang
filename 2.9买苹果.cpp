#include <iostream>
using namespace std;
int main() {
	float i = 2, sum = 0, n = 0;
	while (i <= 100)
	{
		sum = sum + 0.8 * i;
		i = 2 * i;
		n++;
	}
	cout << sum / n << endl;
	return 0;
}