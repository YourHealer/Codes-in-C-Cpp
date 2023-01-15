#include <stdio.h>
int main(){
	float s;
	int p,q;
	float expect;
	scanf("%f%d%d",&s,&p,&q);
	expect=(0.01*p)*(0.1*s+0.01*q*(0.9*s))+(1-0.01*p)*s;
	printf("%.2f\n",expect);
	return 0;
}
