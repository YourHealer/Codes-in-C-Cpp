#include <stdio.h>
#include <math.h>
#define G 6.67e-11

int main(){
	double m,r;
	scanf("%lf%lf",&m,&r);
	printf("%e\n",sqrt(G*m/r));
	return 0;
}
