#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
//定义数据组数 
int amount;
//定义北湖宽度 
long long int n;
//定义循环变量 
long long int i;
long long int j; 
//定义最高土块的位置 
long long int selected;
//定义数组 记入各位置的高度值 
long long int height[100005];
//定义结果进行输出 
long long int res; 
//定义左标准 
long long int standard_left;
//定义右标准 
long long int standard_right;


int main() 
{
	scanf("%d",&amount);
	
	for(j=0;j<amount;j++)
	{
		
//输入宽度	
	scanf("%lld",&n);
	
//初始化数组与数 
	memset(height,0,sizeof(height)); 
	selected=0; 
	res=0;
	
//输入原土块高度 
	for(i=0;i<n;i++)
	{
		scanf("%lld",&height[i]);
		getchar();
	}
	
//找最高的土块 
	for(i=0;i<n;i++)
	{
		if(height[selected]<height[i])
		{
			selected=i;
		}
	}
	
//左半部分循环 
	standard_left=height[0];
	for(i=0;i<selected;i++)
	{
		if(height[i]>standard_left)
		{
			standard_left=height[i];
		}
		if(height[i]<=standard_left)
		{
			res=res+standard_left-height[i];
		}
	}
	
//右半部分循环
	 standard_right=height[n-1];
	for(i=n-1;i>selected;i--)
	{
		
		if(height[i]>standard_right)
		{
			standard_right=height[i];
		}
		if(height[i]<=standard_right)
		{
			res=res+standard_right-height[i];
		}
	}
	
//输出结果 
	printf("%lld\n",res); 
	
	} 
	return 0;
}


