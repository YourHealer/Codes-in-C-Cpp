#include <stdio.h>
#include <stdlib.h>
#define row 3
#define line 4 
int main() 
{
	int matrix[row][line];
	int index,jacket;
	
	printf("please input the numbers!\n");
	
	for(index=0;index<row;index++)
	{
		for(jacket=0;jacket<line;jacket++)
		{
			scanf("%d",(*(matrix+index)+jacket));
		}
	 } 
	 
	 	for(index=0;index<row;index++)
	{
		for(jacket=0;jacket<line;jacket++)
		{
			printf("%d ",*(*(matrix+index)+jacket));
		}
		printf("\n");
	} 
	return 0;
}
