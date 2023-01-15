#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#define pieces 200000

float fsin(float x);
float fcos(float x);
float fexp(float x);
float integral(float superior,float low,float (*pointer)(float));

int main() 
{
	float top,bottom;
	int flag;
	float (*pointer)(float value);
	 
	printf("请输入定积分上下限！\n");
	
	printf("上限为：\n");
	scanf("%f",&top);
	    printf("下限为：\n");
	    scanf("%f",&bottom);
	
	printf("你想对哪个函数进行积分呢？\n");
	printf("正弦函数（1），余弦函数（2），指数函数（3）。\n");
	scanf("%d",&flag);
	
	switch(flag)
    {
    	
	case 1: 
	{
		pointer=fsin; 
		break;
	}
	
	    case 2:
	    	{
	    		pointer=fcos;
	    		break;
			}
			
		        case 3:
		        	{
		        		pointer=fexp;
		        		break;
					}
					
	}
	
	float result;

	result=integral(top,bottom,pointer);
	printf("结果为：%f",result);
	
		return 0;
	
}

float fsin(float x)
{
	return(sin(x));
}

float fcos(float x)
{
	return(cos(x));
}


float fexp(float x)
{
	return(exp(x));
}

float integral(float superior,float low,float (*pointer)(float))
{
	float sum=0;
	float width=(superior-low)/pieces;
	float x=low; 
	int index=0;
	
	for(index=0;index<pieces;index++)
	{
		x=x+width;
		sum=sum+((*pointer)(x)*width);
	}
	
	return(sum);
}




