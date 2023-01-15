#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

	//定义牌数 
	int n;
	
	//定义手牌和牌堆数组 
	int hand[200010];
	int hea[200010];
	
	//定义循环变量 
	int i;
		
	//定义标志数组
	int flag[200010]; 
	
	//定义标志变量，初始设为1在手中 
	int mark=0;
	 
	//定义1的初始位置 
	int signal=-1; 
	
	//定义判断数组 
	int judge[200010];
	
	//定义长度变量
	int length; 
	
	//用于判断牌堆底是否为顺序串 
	int reminder=1; 
	
	//用于判断顺序串能用与否 
	int healer=1;
int main() 
{

	//初始化数组
	memset(hand,0,sizeof(hand));
	memset(hea,0,sizeof(hea));
	memset(flag,0,sizeof(flag));
	memset(judge,0,sizeof(judge)); 
	

	//输入牌数 
	scanf("%d",&n);
	
	//输入手牌 
	for(i=0;i<n;i++)
	{
		scanf("%d",&hand[i]);
	}
	
	//输入牌堆 
	for(i=0;i<n;i++)
	{
		scanf("%d",&hea[i]);
	}
	
	//遍历手牌 
	for(i=0;i<n;i++)
	{
		if(hand[i])
		{
			flag[(hand[i])]=1;
			judge[(hand[i])]=flag[(hand[i])]-hand[i];
		} 
	}
	
	//遍历牌堆 
	for(i=0;i<n;i++)
	{
		if(hea[i])
		{
			flag[(hea[i])]=i+2;
			judge[(hea[i])]=flag[(hea[i])]-hea[i];
		} 

	}
	
	//判断牌堆里是否有1，如果有记下位置 
	for(i=0;i<n;i++)
	{
		if(hea[i]==1)
		{	
			//1不在手里 
			mark=1;
			//记录1的位置 
			signal=i;
			
			break;
		}
	}
		
	//定义比较大小变量 
	int max=0;
	
	//找寻最大的（操作数-打出数） 
	for(i=1;i<=n;i++)
	{
		if(judge[i]>judge[max])
		{
			max=i;
		}
	}
	
	//1在牌堆里，看从该位置到牌底是否为顺子 
	if(mark) 
	{

		for(i=n-1;i>=signal;i--)
		{
			//通过遍历判断牌堆尾是否连续 
			if(hea[i]!=(i-signal+1))
			{
				reminder=0;
			}
			
		}
		
		//牌堆尾连续 
		if(reminder==1)
		{
			//求出连续长度 
			length=n-signal;
	
			//判断能否利用
			for(i=0;i<n-length;i++)
			{
				//对每张非0牌进行判断不可以 
				if(hea[i]!=0)
				{
					if((judge[(hea[i])]+length)>0)
					{
					healer=0;
					}
				}
			} 
				
		} 
	
	} 
	
	if((mark==1)&&(reminder==1)&&(healer==1))
	{

		printf("%d\n",n-length);
	}	
	else
	{
		printf("%d\n",judge[max]+n);
	}
	

	return 0;
}
