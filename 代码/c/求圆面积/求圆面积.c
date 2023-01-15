/*
#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415926 

int main(int argc, char *argv[]) {
	double r;                                    不在宏内定义变量表达式 
	double square;
	scanf("%lf",&r);
	square=PI*r*r;
	printf("%.2lf\n",square);
	return 0;
}
*/

#include <stdio.h>
#define PI 3.1415926
#define square(r) PI*r*r                         /*在宏处定义变量表达式*/ 

int main(){
	double r;
	scanf("%lf",&r);
	printf("%.2lf\n",square(r));
	
}
