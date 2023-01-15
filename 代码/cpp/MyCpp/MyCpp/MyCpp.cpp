#include<iostream>
#include <string>
using namespace std;

//定义宏常量 π
#define pai 3.1415926

int main() {
	//定义常变量
	const int a = 200;

	double s = 3.12437123;
	cout << s << endl;

	cout << '\n' << endl;
	
	double ss = 3.21e-2;
	cout << ss << endl;

	string mystr = "hello world";
	cout << mystr << endl;

	cout << sizeof(a) << endl;
	cout << sizeof(int) << endl;

	//输出 Hello World
	cout << "Hello World!" << endl;

	//返回函数值
	return 0;
}