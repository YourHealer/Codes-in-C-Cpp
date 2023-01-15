#include <stdio.h>
#include <stdlib.h>
#define num 10 

void adjust_order(int* pointer);

int main() 
{
	int number[num];
	int index;
	int* pointer=number;
	
	printf("please input the numbers!\n");
	
	for(index=0;index<num;index++)
	{
		scanf("%d",pointer++);
	 } 
	 
	pointer=number;
	adjust_order(pointer);
	
	for(index=0;index<num;index++)
	{
		printf("%d",*(pointer++));
	}
	
	return 0;
}

void adjust_order(int* pointer)
{
    int temp;
	int i,j;
	for(j=0;j<num-1;j++)
	{
		for(i=0;i<num-1-j;i++)
		{
			if(*(pointer+i)<(*(pointer+i+1)))
			{
			temp=*(pointer+i);
			*(pointer+i)=*(pointer+i+1);
			*(pointer+i+1)=temp;	
			}
			 
		}
	}
}
