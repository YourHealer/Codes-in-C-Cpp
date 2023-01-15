#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int num;
	int x;
	scanf("%d",&num);
	x=num;
	int n=0;
	for(n;x>0;n++)
	{
		x/=10;
	}
	printf("该数是%d位数.\n",n);      /*求几位数*/ 
	
	x=num;
	int fly[5];
	int i=0;
	printf("该数从低位到高位为：\n"); 
	for(;num>0;i++)
	{
	fly[i]=num%10;
	printf("%d\n",fly[i]);            /*求各位数的值*/ 
	num=num/10;	
	}
	
	printf("反序结果为：");
	for(i=0;i<n;i++)
	{
	printf("%d",fly[i]);	/*反序结果*/ 
	}
	printf("\n");
	
}
