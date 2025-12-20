#include<iostream>
using namespace std;
int parseHex(const char* const hexString) {
    int x = 0; 
    for (int i = 0; hexString[i] != '\0'; i++) {
        char n = hexString[i];
        int m = 0;
        if (n >= '0' && n <= '9') {
            m = n - '0';
        }
        else if (n >= 'A' && n <= 'F') {
            m = 10 + (n - 'A');
        }
        else if (n >= 'a' && n <= 'f') {
            m = 10 + (n - 'a');
        }
        else {
            return 0;
        }
        x = x * 16 + m;
    }
    return x;
}
int main() {
    cout << "16进制转换为10进制测试" << endl;
    cout << "1.纯数字：0x168->" << parseHex("168") << endl;
    cout << "2.纯字母：0xADa->" << parseHex("ADa") << endl;
    cout << "3.数字字母混合：0xA5->" << parseHex("A5") << endl;
	return 0;
}