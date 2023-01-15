#include <stdio.h>
#include <stdlib.h>
void function_space(int num[])
{
	int i;
	
	for(i=0;i<4;i++)
	{
		printf("%d",num[i]);
		if(i<3)
		{
			printf(" ");
		}
	}
	
	
}

int main() 
{
	int array[4];
	int value; 
	int i;

	scanf("%d",&value);
	int number=value;
	
	for(i=3;i>=0;i--)
	{
		array[i]=number%10;
		number=number/10;
	}
	
	function_space(array);
	
	return 0;
}
