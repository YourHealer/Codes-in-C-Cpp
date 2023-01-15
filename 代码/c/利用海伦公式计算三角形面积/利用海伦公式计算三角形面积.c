#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b,c;
	float s,square;
	
	printf("请输入您想计算的三角形的三边长：\n");
	scanf("%f %f %f",&a,&b,&c);
	s=(a+b+c)/2;
	square=sqrt(1.0*s*(s-a)*(s-b)*(s-c));
	
	printf("您所输入的三角形边长为：\n");
	printf("%.2f\t%.2f\t%.2f\t",a,b,c);
	printf("\n所求三角形面积为：\n");
	printf("%.2f",square);
	return 0;
}
