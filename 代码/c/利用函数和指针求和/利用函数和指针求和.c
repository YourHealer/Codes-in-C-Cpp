#include <stdio.h>
#include <stdlib.h>
#define num 10

int function_add(int* pointer,int n);
int index;

int main() 
{
	int number[num];
	
	
	for(index=0;index<num;index++)
	{
		scanf("%d",&number[index]);
	}
	
	int sum;
	sum=function_add(number,num);
	printf("数组之和为：%d。\n",sum);
	 
	return 0;
}

int function_add(int* pointer,int n)
{
	int sum;
	for(index=0;index<n;index++)
	{
		sum+=*(pointer+index);
	}
	
	return(sum);
}
