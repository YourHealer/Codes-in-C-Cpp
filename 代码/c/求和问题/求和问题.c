#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,n;
	scanf("%d%d",&a,&n);
	int i;
	int sum=0;
	int amount; 
	for(i=1;i<=n;i++)
	{
		amount=(pow(10,n)-1)/9*a;
		sum=sum+amount;
	 } 
	 printf("ºÍÎª£º%d¡£\n",sum);
	return 0;
}
