#include <stdio.h>
#include <stdlib.h>

int main() 
{
	float function_calculate(float* pointer1,float* pointer2,float (*pointer3)(float*,float*));
	float add(float*,float*);
	float minus(float*,float*);
	float multiply(float*,float*);
	float divide(float*,float*);
	float max(float*,float*);
	float min(float*,float*);
	
	float num_1,num_2;
	int flag;
	float result;
	
	printf("please input two numbers!\n");
	scanf("%f%f",&num_1,&num_2);
	
	printf("您要进行哪种操作呢？请输入操作值\n");
	printf("加法为1，减法为2，乘法为3，除法为4，取大数为5，取小数为6.\n");
	scanf("%d",&flag);
	
	if(flag==1) result=function_calculate(&num_1,&num_2,add);
	if(flag==2) result=function_calculate(&num_1,&num_2,minus);
	if(flag==3) result=function_calculate(&num_1,&num_2,multiply);
	if(flag==4) result=function_calculate(&num_1,&num_2,divide);
	if(flag==5) result=function_calculate(&num_1,&num_2,max);
	if(flag==6) result=function_calculate(&num_1,&num_2,min);
	
	printf("运算结果为：%f",result);
	
	return 0;
}


float function_calculate(float* pointer1,float* pointer2,float (*pointer3)(float*,float*))
{
	float result;
	result=(*pointer3)(pointer1,pointer2);
	return(result);
}


float add(float* pointer1,float* pointer2)
{
	float result;
	
	result=*pointer1+*pointer2;
	
	return(result);
}

float minus(float* pointer1,float* pointer2)
{
	float result;
	
	result=*pointer1-*pointer2;
	
	return(result);
}

float multiply(float* pointer1,float* pointer2)
{
	float result;
	
	result=(*pointer1)*(*pointer2);
	
	return(result);
}

float divide(float* pointer1,float* pointer2)
{
	float result;
	
	result=(*pointer1)/(*pointer2);
	
	return(result);
}

float max(float* pointer1,float* pointer2)
{
	float result;
	
	if((*pointer1)>(*pointer2))
	{
	result=(*pointer1);	
	}
	else
	{
	result=(*pointer2);	
	}
	
	return(result);
}

float min(float* pointer1,float* pointer2)
{
	float result;
	
	if((*pointer1)<(*pointer2))
	{
	result=(*pointer1);	
	}
	else
	{
	result=(*pointer2);	
	}
	
	return(result);
}














