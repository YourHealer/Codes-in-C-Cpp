#include <iostream>
using namespace std;
int main() {
	int num = 100;
	while (num <= 999) {
		int a = num % 10;
		int b = (num / 10) % 10;
		int c = (num / 100) % 10;
		if (a * a * a + b * b * b + c * c * c == num) {
			cout << num << endl;
		}
		num++;
	}
	return 0;
}