#include <stdio.h>
#include <stdlib.h>
#define amount 5

void swap(int pointer[amount],int num_1,int num_2);

int main() 
{
	int num[amount];
	int index;
	int jacket;
	
//输入 
	printf("请输入数组！\n");
	for(index=0;index<amount;index++)
	{
		scanf("%d",&num[index]);
	}
	
//进行选择排序	
	for(index=0;index<amount-1;index++)
	{
		int selected;
		selected=index;
		for(jacket=index+1;jacket<amount;jacket++)
		{
			if(num[jacket]>num[selected])
			{
				selected=jacket;
			}
		} 
		swap(num,selected,index); 
	}
	
//	输出 
	printf("结果是：\n");
	for(index=0;index<amount;index++)
	{
		printf("%d\n",num[index]);
	}
	return 0;
}

//交换 
void swap(int pointer[amount],int num_1,int num_2)
{
	int temp;
	temp=pointer[num_1];
	pointer[num_1]=pointer[num_2];
	pointer[num_2]=temp;
}

