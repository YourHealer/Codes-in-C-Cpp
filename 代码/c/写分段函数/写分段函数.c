#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float x,y;
	scanf("%f",&x);
	if(x<1)
	{
		y=x;
	} 
	if(x>=1&&x<10)
	{
		y=2*x-1;
	}
	if(x>=10)
	{
		y=3*x-11;
	}
	printf("%.2f\n",y);
	return 0;
}
