#include<iostream>
using namespace std;
void swap(double &a,double &b) {
    double temp = a;
    a = b;
    b = temp;
}
void bubbleSort(double list[], int Size) {
    bool changed = true;
    do
    {
        changed = false;
        for (int j = 0; j < Size - 1; j++)
            if (list[j] > list[j + 1])
            {
                swap(list[j], list[j + 1]);
                changed = true;
            }
    } while (changed);
}

int main() {
    const int Size = 10;
    double list[Size];

    cout << "请输入10个双精度数字：" << endl;
    for (int i = 0; i < Size; i++) {
        cin >> list[i];
    }
    bubbleSort(list, Size);
    cout << "经过起泡排序后的数列为：";
    for (int i = 0; i < Size; i++) {
        cout << list[i] << " ";
    }
	return 0;
}
