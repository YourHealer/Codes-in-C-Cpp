#include <iostream>
using namespace std;

bool checkLastNumber(int num) {
	if (num % 10 == 7) {
		return 1;
	}
	else {
		return 0;
	}
}

bool checkMiddleNumber(int num) {
	if ((num / 10) % 10 == 7) {
		return 1;
	}
	else {
		return 0;
	}
}

bool checkNumber(int num) {
	if (num % 7 == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

int main() {
	for (int i = 1; i <= 100; i++) {
		if ((checkLastNumber(i)) || (checkMiddleNumber(i)) || (checkNumber(i))) {
			cout << "ÇÃ×À×Ó" << endl;
		}
		else {
			cout << i << endl;
		}
	}
	return 0;
}