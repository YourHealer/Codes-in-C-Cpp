#include <iostream>
using namespace std;
int main() {
	int a[10] = { 4,1,6,9,2,5,7,0,3,8 };
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 9 - i; j++) {
			if (a[j] > a[j + 1]) {
				int cur = a[j];
				a[j] = a[j + 1];
				a[j + 1] = cur;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		cout << a[i] << endl;
	}
	return 0;
}