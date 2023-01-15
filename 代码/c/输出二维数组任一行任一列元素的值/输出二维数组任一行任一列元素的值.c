#include <stdio.h>
#include <stdlib.h>
#define row 3
#define column 4 
void output_flag(int (*pointer)[column],int flag,int number);

int main() 
{
	int matrix[row][column];

	int index;
	int jacket;
	int flag;
	int number;
	

	printf("please input the elements of the matrix.\n");
	
	for(index=0;index<row;index++)
	{
		for(jacket=0;jacket<column;jacket++)
		{
			scanf("%d",(*(matrix+index)+jacket));
		}
		
	}
	
	printf("what type of the elements do you want to know?\n");
	printf("row(0) or column(1)?\n");
	scanf("%d",&flag);
	printf("which row or column do you want to know?\n");
	scanf("%d",&number);
	
	output_flag(matrix,flag,number);
	return 0;
	
}

void output_flag(int (*pointer)[column],int flag,int number)
{
	int index;
	int jacket;
	
	if(flag==0)
	{
		    if((number>0)||(number<=row))
		    {
		    	
			for(jacket=0;jacket<column;jacket++)
			{
				printf("%d ",*(*(pointer+number-1)+jacket));
			}
			
		    }
		    else 
		    {
			printf("wrong!\n");
			
		    }
	}
	
	else if(flag==1)
	     {
	     	
		    if((number>0)||(number<=column))
		    {
			
			for(index=0;index<row;index++)
			{
				printf("%d ",*(*(pointer+index)+number-1));
			}
			
		    }
		    else 
		    {
			printf("wrong!\n");
			
	     	}
		 }
		
	     else 
	     {
	     	printf("no result.\n");
		 }
}
