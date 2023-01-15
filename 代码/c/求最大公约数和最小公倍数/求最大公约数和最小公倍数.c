#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	scanf("%d%d",&a,&b);
	int max,min; 
	if(a>b) 
	{
	max=a; min=b;
	}
	else
	{
	max=b;min=a;
	}
	int i;
	int k1,k2;
	int a1,b1;
	a1=a;b1=b;
	for(i=1;i<=min;i++)
	{
		if((a1%i==0)&&(b1%i==0))
		{
			k1=i;
		}
	}
	k2=a*b/k1;
	printf("最大公约数为：%d,最小公倍数为：%d.\n",k1,k2);
	
	return 0;
}
