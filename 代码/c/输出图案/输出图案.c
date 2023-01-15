#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	int i,j;
	scanf("%d",&n);
	int k=(n+1)/2;
	for(i=1;i<=n;i++)
	{
		if(i<=k)
		{
			for(j=1;j<=k-i;j++)
			{
				printf(" ");
			}
			
			for(j=1;j<=(2*i-1);j++)
			{
				printf("*");
			}
			printf("\n"); 
		}
		if(i>k)
		{
			for(j=1;j<=i-k;j++)
			{
				printf(" ");
			}
			
			for(j=1;j<=(4*k-2*i-1);j++)
			{
				printf("*");
			}
			printf("\n"); 
		}
	}

	return 0;
}
