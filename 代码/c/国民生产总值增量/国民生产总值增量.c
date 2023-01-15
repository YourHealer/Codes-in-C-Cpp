#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#define r 0.07 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int year=10;
	float jacket,result;
	jacket=(1+r);
	result=pow(jacket,year)-1;
	printf("%.2f%%\n",result*100);
	return 0;
}
