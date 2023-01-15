#include <stdio.h>
#include <stdlib.h>

void move_step(int p1,int p2)
{
	printf("%c→%c\n",p1,p2);
} 

void hanoi(int num,char one,char two,char three)
{
	if(num==1)
	{
		move_step(one,three);
	}
	
	if(num>1)
	{
		hanoi(num-1,one,three,two);
		move_step(one,three);
		hanoi(num-1,two,one,three); 
	}
}

int main() 
{
	int num;
	char one,two,three;
	printf("请问您想要初始化塔层数为：\n");
	scanf("%d",&num);
	printf("您想要对三座塔依次如何命名？\n");
	getchar();                                         /*吸收上一行多余的回车键，非常重要。*/
	scanf("%c%c%c",&one,&two,&three); 
	printf("移动步骤为：\n");
	hanoi(num,one,two,three);
	return 0;
}
