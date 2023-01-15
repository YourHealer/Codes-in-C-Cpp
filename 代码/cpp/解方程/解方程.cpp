#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	double x1,x2;
	double delta,inf;
	scanf("%d%d%d",&a,&b,&c);
	if(a==0){
		if(b==0){
			printf("Input error!\n");
		}else{
			printf("x=%.6lf\n",1.0*(-c)/b);
		}
	}else{
		delta=b*b-4*a*c;
		if(delta<0){
			delta=4*a*c-b*b;
			x1=1.0*sqrt(delta)/(2*a);
			inf=1.0*(-b)/(2*a);
			if(inf==0){
				printf("x1=%.6lfi\nx2=-%.6lfi\n",x1,x1);
			}else{
				printf("x1=%.6lf+%.6lfi\nx2=%.6lf-%.6lfi\n",inf,x1,inf,x1);
			}
		}else{
			x1=1.0*(-b+sqrt(delta))/(2*a);
			x2=1.0*(-b-sqrt(delta))/(2*a);
			if(x1==x2){
				printf("x1=x2=%.6lf\n",x1);
			}else{
				printf("x1=%.6lf\nx2=%.6lf\n",x1,x2);
			}
		}
		}
	return 0;
}
