#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//定义行数 列数 储存原始按钮状况数组 
	int n,m;
	int a[18][18];
	int b[18][18];
	int result=0;
	int res[100000];
	int sum;
	
//声明函数 
void operate(int,int);
void onz(int*);
int compare(int total,int pointer[]);

int main() 
{
//定义循环变量
	int i,j,k; 
//定义计数变量
	int counter;
//定义标志变量
	int flag; 

//输入行数与列数
	scanf("%d %d",&n,&m); 
//计算 
	sum=pow(2,m);
	
//输入原始按钮状况数据,用于访问 
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%1d",&a[i][j]);
		}
	} 


	
//对于不同情况进行枚举,k代表枚举中的第几种枚举类型 
for(k=0;k<sum;k++)
{
		counter=0;
		flag=0;
		
//复制原始按钮，用于后续操作
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			b[i][j]=a[i][j];
		}
	 } 

		
//第一行里从低位起的i号按钮 
		for(j=0;j<m;j++)
		{
			if((k>>j)&1)
			{
				operate(0,m-j-1);
				counter++;
			}
		}
		
//对剩下的每一行进行操作
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<m;j++)
			{
				if(b[i][j]==1)
				{
					operate(i+1,j);
					counter++;
				}		
			}

		} 
		
//对最后一行的亮灯状况进行判断
		for(j=0;j<m;j++)
		{
			if(b[n-1][j]==1)
			{
				flag=1;
			}
		}
		
		if(flag==0)
		{
			res[k]=counter;
		}
		else res[k]=10000000;		
			
}
	
//对不同的步骤数进行比较 
	result=compare(sum,res);
	
//输出结果	
	printf("%d\n",res[result]);
	
	return 0;
}

//对按钮本身及其周围的总共五个按钮进行亮熄操作 
void operate(int row,int pos)
{
	onz(&b[row][pos]);
	onz(&b[row][pos-1]);
	onz(&b[row][pos+1]);
	onz(&b[row-1][pos]);
	onz(&b[row+1][pos]);
}

//亮的变暗，暗的变亮 
void onz(int* num)
{
	if(*num==1) *num=0;
	else *num=1;
}

//比较counter最小值 
int compare(int total,int pointer[])
{
	int min=0;
	int t; 
	for(t=0;t<total;t++)
	{
		if(*(pointer+min)>=*(pointer+t))
		{
			min=t;
		}
	}
	return(min);
}

