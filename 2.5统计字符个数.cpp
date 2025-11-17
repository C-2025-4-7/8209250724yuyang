#include <iostream>
using namespace std;
int main()
{
	char c;
	int letter = 0;
	int blankspace = 0;
	int digit = 0;
	int others = 0;
	cout << "请输入一串字符：";
	while ((c = getchar()) != '\n') {
		if ((c >= 'a' && c <= 'z') || (c >= 'A ' && c <= 'Z')) {
			letter++;
		}
		else if (c >= '0' && c <= '9') {
			digit++;
		}
		else if (c = ' ') {
			blankspace++;
		}
		else
			others++;
	}
	cout << "英文字符个数为："<<letter<<endl;
	cout << "数字字符的个数为："<<digit<<endl;
	cout << "空格的个数为："<<blankspace<<endl;
	cout << "其他字符个数为"<<others<<endl;
	return 0;
}