#include <stdio.h>
#include <stdlib.h>

void output (int* pointer);

int main() 
{
	int num[10];
	int index;
	
	for(index=0;index<10;index++)
	{
	    scanf("%d",&num[index]);	
	} 
	
	output(num);
	
	return 0;
}

void output (int* pointer)
{
	int counter=0;
	
	while(counter<10)
	{
		printf("%d ",*(pointer++));
		counter++;
	}
}
