#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//定义结果变量 
int res=1;

//用字符串数组记录小军位置 
char array[1020];

//定义记录变量 
int record[5];

//定义长度变量 
int length;

//定义循环变量 
int i=0;

int main()
{
	//定义变量 
	int x=0;
	int num=0;
	
	//定义判断变量 
	bool flag=false;
	
	//进行输入操作 
	scanf("%d %s",&x,array);
	
	//求长 
	length=strlen(array);
	
	//对长度分类讨论 ，只有后三位有用 
	if(length==1)
	{
		num=array[length-1]-'0';
	} 
	else if(length==2)
		{
			num=(array[length-2]-'0')*10+array[length-1]-'0'; 
		}
		else if(length==3)
			{
				num=(array[length-3]-'0')*100+(array[length-2]-'0')*10+array[length-1]-'0';
			}
			//大于四位的进行补1000操作，防止因为取位漏掉循环过程 
			else
			{
				num=1000+(array[length-3]-'0')*100+(array[length-2]-'0')*10+array[length-1]-'0';
			}
		
	for(i=0;i<num;i++)
	{
		res=res*x;
		if(res>=1000)
		{
			flag=true;
		}
		
		res=res%1000;
		//个位 
		record[0]=res%10;
		//十位 
		record[1]=(res/10)%10;
		//百位 
		record[2]=res/100;
		
	}
	//进入循环 
	if(flag)
	{
		printf("%d%d%d\n",record[2],record[1],record[0]);
	} 
	//没进循环 
	else printf("%d\n",res);
	
	return 0;
}
