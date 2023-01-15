#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1[2][3];
	int num2[3][2];
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&num1[i][j]);
		}
	}
	for(j=0;j<3;j++)
	{
		for(i=0;i<2;i++)
		{
			num2[j][i]=num1[i][j];
		}
	}
	
		for(j=0;j<3;j++)
	{
		for(i=0;i<2;i++)
		{
			printf("%d\t",num2[j][i]);
		}
		printf("\n");
	}
	
	return 0;
}
