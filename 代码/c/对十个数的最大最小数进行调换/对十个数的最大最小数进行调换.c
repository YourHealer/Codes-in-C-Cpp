#include <stdio.h>
#include <stdlib.h>
#define num 10

void input(int* pointer);
void swap(int* pointer1,int* pointer2);
void output(int* pointer);
 
int main() 
{
	
	int number[num];
	int copy[num];
	
	input(number);
	swap(number,copy);
    output(number);
    
	return 0;
}

void input(int* pointer)
{
	int index;
	
	for(index=0;index<num;index++)
	{
		scanf("%d",&pointer[index]);
	} 
	 
}

void swap(int* pointer1,int* pointer2)
{
	int index;
	int jacket;
	
	for(index=0;index<num;index++)
	{
		pointer2[index]=pointer1[index];
	}
	
	for(jacket=0;jacket<num-1;jacket++)
	{
		for(index=0;index<num-jacket-1;index++)
		{
			int temp;
			
			if(pointer2[index]>pointer2[index+1])
			{
			temp=pointer2[index];
			pointer2[index]=pointer2[index+1];
			pointer2[index+1]=temp;
			}
			
		} 
	}

	pointer1[0]=pointer2[0];
	pointer1[num-1]=pointer2[num-1];
	
}

void output(int* pointer)
{
	int index;
	
	for(index=0;index<num;index++)
	{
		printf("%d ",pointer[index]);
	} 
	printf("\n");

}

