#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num[15];
	int i;
	printf("请从大到小输入十五个数。\n");
	for(i=0;i<15;i++) 
	{
		scanf("%d",&num[i]);
	}
	
	int value;
	printf("请输入您想查找的数。\n");
	scanf("%d",&value); 
	
	int position;
	int flag=0;
	for(i=0;i<15;i++)
	{
		if(value==num[i])
		{
			flag=1;
			position=i+1;
		}
	}
	
	if(flag==1)
	{
		printf("位于数组的第%d个位置。\n",position);
	}
	
	if(flag==0)
	{
		printf("无此数\n"); 
	}
	return 0;
}
