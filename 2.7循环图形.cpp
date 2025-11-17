#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b, c, d ,e;
    for (b = 1; b <= a - 1; b++) {
        for (c = 1; c <= a - b; c++) {
            cout << " ";
        }
        for (d = 1; d <= b; d++) {
            cout << "*";
        }
        cout << endl;
    }
    for (e = 1; e <= a; e++) {
        cout << "*";
    }
    cout << endl;
    return 0;
}