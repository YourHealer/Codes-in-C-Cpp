#include <stdio.h>
#include <stdlib.h>

void exchange(int* pointer,int number);

int main() 
{
	int num[10];
	int amount;
	int index;
	int* pointer=num;
	
	printf("please input the amount of the element of the array.\n");
	scanf("%d",&amount);
	printf("please input the numbers that you want to store in the array.\n");
	for(index=0;index<amount;index++)
	{
		scanf("%d",pointer++);
	}
	
	pointer=num;
	exchange(pointer,amount);
	
	for(index=0;index<amount;index++)
	{
		printf("%d",*(pointer++));
	}
	
	return 0;
}

void exchange(int* pointer,int number)
{
	int i,j,k;
	int temp;
	
	if(number%2!=0)
	{
		i=0;
		j=number-1;
		
		for(k=0;k<(number-1)/2;k++)
		{
			temp=*(pointer+i);
			*(pointer+i)=*(pointer+j);
			*(pointer+j)=temp;
			
			i++;
			j--;
		}
	}
	
	if(number%2==0)
	{
		i=0;
		j=number-1;
		
		for(k=0;k<number/2;k++)
		{
			temp=*(pointer+i);
			*(pointer+i)=*(pointer+j);
			*(pointer+j)=temp;
			
			i++;
			j--;
		}
	}
	
}
