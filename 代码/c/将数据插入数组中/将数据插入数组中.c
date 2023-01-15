#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num[11]={0,3,6,9,12,15,18,21,24,27};
	int value;
	int mark;
	int i; 
	printf("您想插入的数据是：\n");
	scanf("%d",&value); 
	for(i=0;i<10;i++)
	{
		if(value<num[i])
		{
			mark=i;                     /*标记插入位置*/
			break;                      /*标记完成，跳出循环*/ 
		}
	}
	for(i=10;i>mark;i--)
	{
		num[i]=num[i-1];                /*通过倒序位移，实现数组后半部分元素搬移*/ 
	}
	num[i]=value;                       /*插入数据*/ 
	for(i=0;i<11;i++)
	{
		printf("%d\t",num[i]);
	}
	
	return 0;
}
