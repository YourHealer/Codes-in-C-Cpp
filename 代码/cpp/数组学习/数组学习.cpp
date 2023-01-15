#include <iostream>
#include <string>
using namespace std;

int main() {
/*
	int num[3][4]={1,3,0,0,4,0,5,8};
	int i;
	int j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",num[i][j]);
		}
		printf("\n");
	}
*/

int a=98742;
string p=to_string(a);
cout << p <<endl;	 
cout << p[3] <<endl;

	return 0;
}
