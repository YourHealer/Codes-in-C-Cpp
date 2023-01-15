#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415926 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float r=1.5;
	float h=3.0;
	printf("圆周长为：%.2f\n",2*PI*r);
	printf("圆面积为：%.2f\n",PI*r*r);
	printf("圆球表面积为：%.2f\n",4.0*PI*r*r);
	printf("圆球体积为：%.2f\n",4.0/3*PI*r*r*r);
	printf("圆柱体积为：%.2f\n",PI*r*r*h);
	return 0;
}
