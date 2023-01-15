#include <iostream>
using namespace std;

void BubbleSort(int* p,int len) {
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len - 1; j++) {
			if (*(p + j) < *(p + j + 1)) {
				int temp = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = temp;
			}
		}
	}
}

int main() {
	int arr[10] = { 5, 2, 8, 1, 4, 9, 7, 0, 6, 3 };
	int len = sizeof(arr) / sizeof(arr[0]);
	cout << len << endl;
	BubbleSort(arr,len);
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
}