#include <iostream>
using namespace std;
int main() {
	for (int i = 1; i <= 9; i++) {
		int j = 1;
		while(j <= i){
				cout << j << '*' << i << '=' << i * j << '\t';
				j++;
		}
		cout << endl;
	}
	return 0;
}