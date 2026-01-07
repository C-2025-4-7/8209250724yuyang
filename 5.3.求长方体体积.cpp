#include<iostream>
using namespace std;
class Cuboid
{
private:
	double L[3];
	double W[3];
	double H[3];
public:
	void SetValue() {
		for (int i = 1; i <= 3; i++) {
			cout << "请分别输入第" << i << "个长方体的长、宽、高：";
			cin >> L[i - 1] >> W[i - 1] >> H[i - 1];
		}
	}
	void CalculateV() {
		for (int i = 1; i <= 3; i++) {
			cout << "第" << i << "个长方体的体积为：" << L[i - 1] * W[i - 1] * H[i - 1] << endl;
		}
	}
};
int main() {
	Cuboid Cu;
	Cu.SetValue();
	Cu.CalculateV();
	return 0;
}