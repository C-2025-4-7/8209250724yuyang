#include<iostream>
using namespace std;
void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
void BubbleSort(int list[], int size) {
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < size - 1; j++)
			if (list[j] > list[j + 1])
			{
				swap(list[j], list[j + 1]);
				changed = true;
			}
	} while (changed);
}
void merge(int list1[], int size1,int list2[], int size2, int list3[]) {
	BubbleSort(list1, size1);
	BubbleSort(list2, size2);
	for (int i = 0; i < size1; i++) {
		list3[i] = list1[i];
	}
	for (int j = size1,k=0; j < size1+size2; j++,k++) {
		list3[j] = list2[k];
	}
	BubbleSort(list3, size1 + size2);
}
int main() {
	const int max = 80;
	int list1[max], list2[max],list3[max*2];
	cout << "Enter the size of list1:";
	int n1;
	cin >> n1;
	cout << "Enter list1:";
	for (int i = 0; i < n1; i++) {
		cin >> list1[i];
	}
	cout << endl;
	cout << "Enter the size of list2:";
	int n2;
	cin >> n2;
	cout << "Enter list2:";
	for (int i = 0; i < n2; i++) {
		cin >> list2[i];
	}
	merge(list1, n1, list2, n2, list3);
	cout << "The merged list is:";
	for (int i = 0; i < n1 + n2; i++) {
		cout << list3[i] << " ";
	}
	return 0;
}