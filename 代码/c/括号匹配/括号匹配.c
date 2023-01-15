#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int min(int a,int b)
{
	if(a>b)	
	{
		return b;
	}
	else return a;
} 

int main() 
{
	//定义结果
	int result=0; 
	
	//定义有效左右括号数 
	int left;
	int right;
	
	//定义行数 
	int n;
	
	//定义储存括号串的字符数组
	int record_left[100005];
	int record_right[100005];
	char c;
	
	//定义循环变量
	int i,j;
	
	//输入行数 
	scanf("%d",&n);
	
	//吞掉回车 
	getchar(); 
	
	//判断是否合法
	int flag; 
	
	//记录合法字符串量
	int record_middle=0; 
	
	//初始化数组
	memset(record_left,0,sizeof(record_left));
	memset(record_right,0,sizeof(record_right));
	 
	for(i=0;i<n;i++)
	{
		//初始都认为合法 
		flag=1;
		
		left=0;
		right=0;
		
		while((c=getchar())!='\n') 
		{
			if(c=='(')
			{
				left++;
			}
			else if(left!=0)
				{
				left--;
				}
				else
				{
					right++;
				}
		}
		
		//判断是否合法
		if((left>0)&&(right>0))
		{
			flag=0;
		} 
		
		//判断合法中的情况 
		if(flag==1)
		{
			//完整括号 
			if((left==0)&&(right==0))
			{
				record_middle++;
			}
		
			//需右串
			if((left>0)&&(right==0)) 
			{
				record_left[left]=record_left[left]+1;
			}
		
			//需左串
			if((left==0)&&(right>0))
			{
				record_right[right]=record_right[right]+1;
			} 
		}
		
		 
	}
	
	for(i=0;i<100000;i++)
	{
		//对结果进行累加 
		result=result+min(record_left[i],record_right[i]);
	}	

	//输出结果 
	printf("%d\n",result+record_middle/2);
	
	return 0;
}
