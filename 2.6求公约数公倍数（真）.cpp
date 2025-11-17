#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "请输入两个正整数: ";
    cin >> a >> b;
    int A = a;
    int B = b;
    int c;
    while (b != 0) {
        c = b;
        b = a % b;
        a = c;
    }
    int gcd = a; 
    int lcm = (A * B) / gcd;
    cout << "最大公约数为: " << gcd << endl;
    cout << "最小公倍数为: " << lcm << endl;
    return 0;
}