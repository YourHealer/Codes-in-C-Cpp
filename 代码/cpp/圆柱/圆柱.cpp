#include <stdio.h>
#define pai 3.1415926
int main(){
	double h,r;
	scanf("%lf",&r);
	scanf("%lf",&h);
	printf("s=%.2f,v=%.2f\n",2*pai*r*h,pai*r*r*h);
	return 0;
}
