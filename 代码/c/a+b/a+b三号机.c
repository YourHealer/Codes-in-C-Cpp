#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i,j,k;
int main() 
{
	
//定义数据总量 
	int amount;
	scanf("%d",&amount);
	
//建立二维数组 第一维用于对应第几组数据 第二维用于输入数据 
//a和b为字符数组 c为整数型数组 
	char a[100010];
	char b[100010];
	int c[100010];
	
// 定义a的长度 b的长度 
	int length_a,length_b;
//定义c的长度 
	int counter=0;
	
//两个二进制位的和与后一位的进值的和
	int judge=0; 
//明确哪个字符串更短/长一些
	int min=0; 
	int max=0; 
	

//  输入两个字符串的数据	
	for(j=0;j<amount;j++)
	{
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
	//保留在原位的值
		int stay=0;
	//进上来的值 	
		int leave=0;
		scanf("%s %s",a,b);
	

//初始化数组c 
		memset(c,0,sizeof(c));
		
//获得a和b的长度 
	length_a=strlen(a);
	length_b=strlen(b);
	
//确定谁更长 
	if(length_a>length_b)
	{
		min=length_b;
		max=length_a;
	}
	else
	{
		min=length_a;
		max=length_b;
	}
	
//	标齐计算 
	for(i=1;i<=max+1;i++)
	{
		//对齐部分 
		if(i<=min)
		{
			//倒序对应位置加和 
			judge=(a[length_a-i]-48)+(b[length_b-i]-48)+leave;
			// 进位的值 
			leave=judge/2;
			// 留下的值 
			stay=judge%2;
			// c的对应位为留下的值 
			c[i-1]=stay;	
			counter++;	
		}
		//不对齐部分 
		if(i>min&&i<=max)
		{
			if(length_a>length_b)
			{
				judge=(a[length_a-i]-48)+0+leave;
				leave=judge/2;
				stay=judge%2;
				c[i-1]=stay;	
				counter++;
			}
			if(length_b>length_a)
			{
				judge=(b[length_b-i]-48)+0+leave;
				leave=judge/2;
				stay=judge%2;
				c[i-1]=stay;		
				counter++;
			}
		}
		
		//可能的最高进位 
		if(i==(max+1))
		{
			if(leave==1)
			{
				c[i-1]=leave;
				counter++;
			}
		}
	
	}
	

// 格式输出 
	for(k=0;k<(counter-length_a+2);k++)
	{
		printf(" ");
	}
	printf("%s\n",a);
	
		printf("+");
		for(k=0;k<(counter-length_b+1);k++)
		{
			printf(" ");
		}
		printf("%s\n",b);
		
			for(k=0;k<(counter+2);k++)
			{
				printf("-");
			}
			printf("\n");
			
					for(k=0;k<2;k++)
				{
					printf(" ");
				}
				for(counter;counter>=1;counter--)
				{
					printf("%d",c[counter-1]);
				}
				printf("\n");
		
	}


	return 0;
}
