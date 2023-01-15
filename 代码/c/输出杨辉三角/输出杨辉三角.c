#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
	int num[10][10];
	int i,j;
	for(i=0;i<10;i++)
	{
	
			for(j=0;j<(i+1);j++)
	    {
				if(j==0||j==i)
				{
					num[i][j]=1;
				}
				else
				{
					num[i][j]=num[i-1][j-1]+num[i-1][j];
				}
			
		}
		
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<(i+1);j++)
		{
			printf("%d\t",num[i][j]);
		}
		printf("\n");
	}
	return 0;
}
