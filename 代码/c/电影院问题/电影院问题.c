#include <stdio.h>
#include <stdlib.h>

int information_age(int order)
{
	int age;
	if(order==1)
	{
		age=10;
	}
	if(order>1)
	{
		age=information_age(order-1)+2;
	}
	return(age);
 } 

int main() {
	int num;
	printf("你想求第几个人的年龄？\n");
	scanf("%d",&num);
	int result;
	result=information_age(num);
	printf("第%d个人的年龄是%d岁。\n",num,result);
	return 0;
}
