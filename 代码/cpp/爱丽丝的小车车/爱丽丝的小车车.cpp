#include <stdio.h>
int main(){
	double v0,a,t;
	scanf("%lf%lf%lf",&v0,&a,&t);
	printf("%.3lf\n",v0*t+0.5*a*t*t);
	return 0;
}
