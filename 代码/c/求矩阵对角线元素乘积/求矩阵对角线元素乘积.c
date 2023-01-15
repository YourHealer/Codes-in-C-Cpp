#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int matrix[3][3];
	int i,j;
	int result=1;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	 } 
	 for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
			result=result*matrix[i][j];	
			}
		}
	 } 
	 printf("½á¹ûÊÇ%d.\n",result);
	return 0;
}
