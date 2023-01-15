#include <stdio.h>
#include <stdlib.h>

void output(int* pointer1,int* pointer2);

int main() 
{
	int a,b;
	printf("请输入两个数！\n");
	scanf("%d%d",&a,&b);
	
	output(&a,&b);
	printf("两数由大到小为：%d %d。\n",a,b);
	
	return 0;
}
/*利用指针交换两数
void output(int* pointer1,int* pointer2)
{
	int temp;
	if((*pointer1)<(*pointer2))
	{
		temp=*pointer1;
		*pointer1=*pointer2;
		*pointer2=temp;
	}
}*/

/*利用指针交换地址*/

void output(int* pointer1,int* pointer2)
{
	int* address;
	if((*pointer1)<(*pointer2))
	{
		address=pointer1;
		pointer1=pointer2;
		pointer2=address;
	}
/*	printf("%d %d.",*pointer1,*pointer2);  有这句才能输出正确的结果。 
这是因为，从主函数传入的是实参，要改变的也是实参。
到了这里pointer是形参，对pointer进行操作无法改变实参，只有在此函数里利用“* ”进行访问才能修改内容。*/
 } 
