#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <queue>

//定义数据组数
int n;

//定义同学个数
int num;

//定义数组存储每一位同学的x坐标
int x[500005];

// 定义数组存储每一位同学的y坐标
int y[500005];

//定义循环变量
int i,j; 

int main() 
{
	//输入数据组数 
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&num);
		for(j=0;j<num;j++)
		{
			scanf("%d",&x[j]);
			scanf("%d",&y[j]);
		}	
	} 
	return 0;
}
