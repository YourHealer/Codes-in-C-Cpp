#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	printf("%.2f %.2f %.2f\n",a,b,c);
	printf("%.2f\n",a+b+c);
	printf("%d\n",(int)(a+b+c+0.5));
	return 0;
}
