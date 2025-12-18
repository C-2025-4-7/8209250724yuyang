#include<iostream>
using namespace std;
void count(const char s[], int counts[]) {
	for (int i = 0; i < 26; i++) {
		for (int j = 0; s[j] != '\0'; j++) {
			if (s[j] == (char)('a' + i) || s[j] == (char)('A' + i)) {
				counts[i]++;
			}
		}
	}
}
int main() {
	const int max = 100;
	char str[max];
	int counts[26] = {0};
	cout << "Enter a string:";
	cin.getline(str,100);
	count(str, counts);
	for (int i = 0; i < 26; i++) {
		if (counts[i] != 0) {
			cout << (char)('a'+i) << ":" << counts[i] << "times" << endl;
		}
	}
	return 0;
}