#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int sum1=0;
	int sum2=0;
	float sum3=0;
	for(i=1;i<=100;i++)
	{
		
		sum1=sum1+i;
	 } 
	 for(i=1;i<=50;i++)
	 {
	 	
	 	sum2=sum2+i*i;
	 }
	 for(i=1;i<=20;i++)
	 {
	 	
	 	sum3=sum3+1.0/i;
	 }
	 float sum;
	 sum=sum1+sum2+sum3;
	 printf("%f",sum);
	 
	return 0;
}
