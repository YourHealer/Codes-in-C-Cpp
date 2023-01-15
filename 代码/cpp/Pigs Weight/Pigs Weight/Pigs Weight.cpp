#include <iostream>
using namespace std;
int main() {
	int arr[5] = { 300,350,200,400,250 };
	int maxWeight=0;
	for (int i=0; i<=4; i++) {
		if (maxWeight <= arr[i]) {
			maxWeight = arr[i];
		}
	}
	cout << maxWeight << endl;
	return 0;
}