#include <iostream>
using namespace std;
int main() {
	int arr[5] = { 1,3,2,5,4 };
	for (int i = 0; i <= 1; i++) {
		int cur = 0;
		cur = arr[i];
		arr[i] = arr[4 - i];
		arr[4 - i] = cur;
	}
	for (int i = 0; i <= 4; i++) {
		cout << arr[i] << endl;
	}
	return 0;
}