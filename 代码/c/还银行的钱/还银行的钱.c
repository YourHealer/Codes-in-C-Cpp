#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int d=300000;
	int p=6000;
	float r=0.01;
	float m;
	m=(log(p)-log(p-d*r))/log(1+r);
	printf("%.1f\n",m); 
	return 0;
}
