#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h> 

//提供的珠子 
char supply[200010];

//想要的珠子 
char want[10010];

//要操作的珠子
char operate[20020];

//若为next[i][j]=k,代表在i位置的最近j字母的位置是k
int next[200010][26];

//定义储存结果的数组
int res[10010]; 

//定义储存最佳结果的数组
int best[10010]; 

//定义循环变量 
int i,j,k;
 
//定义标志变量 
bool flag[200010];

//定义判断变量
int circle;
int smaller; 

//定义数组长度
int length_supply;
int length_want; 

//记录位置
int pos; 
 
int main() 
{	
	//输入 
	scanf("%s%s",supply,want);
	
	memset(operate,0,sizeof(operate));
	
	//复制与连接
	 strcpy(operate,want);
	 strcat(operate,want);
	  
	//求长
	length_supply=strlen(supply);
	length_want=strlen(want) ;
	
	//操作next 
	memset(next,-1,sizeof(next));
		
	//初始化
	for(i=0;i<length_want;i++)
	{
		best[i]=10000000;
	}
	
	for(i=length_supply-1;i>=0;i--)
	{
		for(j=0;j<26;j++)
		{
			//没有更新数组信息时，保留下一个的信息 
			next[i][j]=next[i+1][j];
		}
			//更新一类字母的新信息（包括本位置最近的某字母为本身） 
			next[i][supply[i]-'a']=i; 
	}

	
	for(i=0;i<length_want;i++)
	{
		//每次循环前初始化,从初始0位置开始，假设可以成环，是最优解，除初位置外均能跳至下一位置 
		pos=0;
		circle=1;
		smaller=1;
		memset(flag,0,sizeof(flag));
		
		for(j=0;j<length_want;j++)
		{
			//判断本位置是否用过，若没用过用本位置就用，用过就跳转至下一位置 
			if(flag[pos])
			{
				pos++;
			}	
			//更新位置信息 
			pos=next[pos][operate[i+j]-'a'];
			
			//储存位置信息 
			res[j]=pos+1;
			
			//标记该位置已经被用过了 
			flag[pos]=true;
			
			//需要的字母提供不了说明无法成环 
			if(pos==-1)
			{
				circle=0;
				break;
			}
		}		
			//如果可以成环需要进行比较 
		if(circle)
		{
				for(k=0;k<length_want;k++)
				{
					if(res[k]<best[k])
					{
						
						break;
					}
					else if(res[k]>best[k])
					{
						smaller=0;
						break;
					}
		    	}
			
			
			//如果是最优解就更新最优解 
			if(smaller)
			{
				for(k=0;k<length_want;k++)
				{
					best[k]=res[k];
				}
			} 
			
		}
		 
		
	} 
	
	//输出,并分析输出回车还是空格 
	for (k=0;k<length_want;k++)
	{
		 printf("%d%c",best[k],k==length_want-1?'\n':' ');
	}
 
	return 0;
}
