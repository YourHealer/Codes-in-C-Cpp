#include <iostream>
using namespace std;
int main() {
	int a = 10;
	int b = 10;
	const int* p = &a;
	p = &b;
	cout << *p << endl;
	return 0;
}