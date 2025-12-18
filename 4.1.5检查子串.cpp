#include<iostream>
using namespace std;
int indexOf(const char s1[], const char s2[]) {
	if (s1[0] == '\0') 
		return 0;
	for (int i = 0; s2[i] != '\0'; i++) {
		bool found = true;
		for (int j = 0; s1[j] != 0; j++) {
			if (s1[j] != s2[i+j]||s2[i+j]=='\0') {
				found = false;
				break;
			}
		}
		if (found)return i;
	}
	return -1;
}
int main() {
	const int max = 100;
	char s1[max];
	char s2[max];
	cout << "Enter the first string:";
	cin.getline(s1, 100);
	cout << "\nEnter the second string:";
	cin.getline(s2, 100);
	int n = indexOf(s1, s2);
	cout << "indexOf(¡°" << s1 << "¡±, ¡°" << s2 << "¡±) is" << indexOf(s1,s2) << endl;
	return 0;
}