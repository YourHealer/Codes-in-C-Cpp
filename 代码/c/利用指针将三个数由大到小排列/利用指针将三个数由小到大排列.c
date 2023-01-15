#include <stdio.h>
#include <stdlib.h>

void swap_3(int* pointer1,int* pointer2,int* pointer3);
void swap_2(int* pointer1,int* pointer2);

int main() 
{
	int num_1,num_2,num_3;
	
	printf("请输入！\n");
	scanf("%d%d%d",&num_1,&num_2,&num_3); 
	
	swap_3(&num_1,&num_2,&num_3);
	printf("三个数由大到小，顺序排列为:%d %d %d.\n",num_1,num_2,num_3);
	
	return 0;
}

void swap_3(int* pointer1,int* pointer2,int* pointer3)
{
    swap_2(pointer1,pointer2);
    swap_2(pointer1,pointer3);
	swap_2(pointer2,pointer3);    
	
}

void swap_2(int* pointer1,int* pointer2)
{
	int swap;
	if((*pointer1)<(*pointer2))
	{
		swap=*pointer1;
		*pointer1=*pointer2;
		*pointer2=swap;
	}
}
