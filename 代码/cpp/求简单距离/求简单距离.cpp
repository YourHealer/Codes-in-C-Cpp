#include <stdio.h>
#include <string.h>
#include <math.h>
double judge(double x,double y,double x0,double y0){
	double res=pow((x-x0),2)+pow((y-y0),2);
	return(sqrt(res));
}

int main(){
	double x,y,x0,y0;
	getchar();
	scanf("%lf",&x);
	getchar();
	scanf("%lf",&y);
	getchar();
	getchar();
	getchar();
	scanf("%lf",&x0);
	getchar();
	scanf("%lf",&y0);
	getchar();
	printf("%.2lf",judge(x,y,x0,y0));
	return 0;
}
