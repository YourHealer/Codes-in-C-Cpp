#include <stdio.h>
#include <stdlib.h>
#include <string.h>

	//定义货架上的珠子 
	char supply[200005];
	
	//定义想要的珠子 
	char want[10005];
	
	//复制想要的珠子 
	char copy[20010];
	
	//定义出现变量
	int appear[10005]; 	
	
	//定义计数变量
	char array[10000][10000];
	
	//定义排序数组
	char order[10000][10000]; 
	
	//临时变量 
	char target[10000];
	 
	//定义循环变量
	int i=0,j=0,k=0,t=0;
	int satisfy=0;
	
	//定义长度变量
	int length_want; 
	int length_supply;

	int key=0;
	
int main() 
{
	 
	//初始化
	memset(supply,0,sizeof(supply));
	memset(copy,0,sizeof(copy)); 
	memset(want,0,sizeof(want));
	memset(appear,0,sizeof(appear));
	memset(order,0,sizeof(order));
	memset(array,0,sizeof(array));
	memset(target,0,sizeof(target)); 
	
	//初始化输入
	gets(supply);
	gets(want);
	
	//进行复制 
	strcpy(copy,want);
	strcat(copy,want); 
	
	//测量数组长度
	length_want=strlen(want); 
	length_supply=strlen(supply);
	
	int min=0;
	 
	//k代表可能的情况 
	for(k=0;k<length_want;k++)
	{
		j=0;
		
		//i代表供挑选的珠子序列 
		for(i=0;i<length_supply;i++)
		{
			if(j<length_want)
			{
				if(copy[j+k]==supply[i])
				{
					appear[k]=appear[k]+1;
					array[k][j]=i+1;
					j++;
				}
			}
			else break;
		}
			
	}
	
	for(k=0;k<length_want;k++)
	{
		//全部都能找到
		if(appear[k]==length_want)
			{
				strcpy(order[satisfy++],array[k]);	
			}
	}
	
	//找到counter最小值为order[0] 
	for(k=0;k<satisfy-1;k++)
	{
		if(strcmp(order[k],order[k+1])<=0)
		{
			strcpy(target,order[k]);
			strcpy(order[k],order[k+1]);
			strcpy(order[k+1],target);
		}
	}
	
	for(k=0;k<length_want;k++)
	{
		printf("%d",order[satisfy-1][k]);
		if(k!=length_want-1)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}

	return 0;
}
