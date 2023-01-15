#include <stdio.h>
#include <stdlib.h>

void order_two(int* pointer1,int* pointer2);
void order_three(int* pointer1,int* pointer2,int* pointer3);

int main() 
{
	int num_1,num_2,num_3;
	scanf("%d%d%d",&num_1,&num_2,&num_3);
	order_three(&num_1,&num_2,&num_3);
	printf("%d %d %d\n",num_1,num_2,num_3);
	return 0;
}

void order_three(int* pointer1,int* pointer2,int* pointer3)
{
	order_two(pointer1,pointer2);
	order_two(pointer1,pointer3);
	order_two(pointer2,pointer3);
}

void order_two(int* pointer1,int* pointer2)
{
	if((*pointer1)>(*pointer2))
	{
		int swap;
		swap=*pointer1;
		*pointer1=*pointer2;
		*pointer2=swap;
	}
}
