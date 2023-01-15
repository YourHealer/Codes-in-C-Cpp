#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	int max;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
	max=a;	
	}
	else max=b;
	if(max<c)
	{
		max=c;
	}
	printf("%d\n",max);
	return 0;
}
