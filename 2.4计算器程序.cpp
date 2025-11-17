//这题问deepseek的，真不会（哭）
#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;
    double result;
    cout << "简易计算器" << endl;
    cout << "支持运算: + - * / %" << endl;
    cout << "请输入表达式 (例如: 12 + 34): ";
    cin >> num1 >> op >> num2;
    switch (op) {
    case '+':
        result = num1 + num2;
        cout << num1 << " + " << num2 << " = " << result << endl;
        break;

    case '-':
        result = num1 - num2;
        cout << num1 << " - " << num2 << " = " << result << endl;
        break;

    case '*':
        result = num1 * num2;
        cout << num1 << " * " << num2 << " = " << result << endl;
        break;

    case '/':
        if (num2 == 0) {
            cout << "错误：除数不能为0！" << endl;
        }
        else {
            result = num1 / num2;
            cout << num1 << " / " << num2 << " = " << result << endl;
        }
        break;

    case '%':
        if (num2 == 0) {
            cout << "错误：取模运算的除数不能为0！" << endl;
        }
        else if (static_cast<int>(num1) != num1 || static_cast<int>(num2) != num2) {
            cout << "错误：取模运算要求操作数为整数！" << endl;
        }
        else {
            result = static_cast<int>(num1) % static_cast<int>(num2);
            cout << static_cast<int>(num1) << " % " << static_cast<int>(num2) << " = " << result << endl;
        }
        break;

    default:
        cout << "错误：不支持的运算符 '" << op << "'" << endl;
        cout << "支持的运算符: + - * / %" << endl;
        break;
    }

    return 0;
}