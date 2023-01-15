#include <stdio.h>
#include <stdlib.h>

int function_gcd(int n1,int n2)
{
	int result;
	
	int min;
	min=(n1>n2?n2:n1);                      /*最大公约数*/ 
	
	int i;
	for(i=1;i<=min;i++)
	{
		if((n1%i==0)&&(n2%i==0))
		{
			result=i;
		}
		
	}
	return(result);
	
 } 
 
 
 int function_lcm(int n1,int n2)
 {
 	int result;
 	
 	int jacket1;
 	int jacket2;
                                                      /*最小公倍数*/ 
 	jacket1=n1/(function_gcd(n1,n2));
 	jacket2=n2/(function_gcd(n1,n2));
 	
 	result=jacket1*jacket2*(function_gcd(n1,n2));
 	
 	return(result);
 }


int main() 
{
	 
	int num_1,num_2; 
	int gcd;
	int lcm;
	
	printf("请输入两个数以计算最大公约数和最小公倍数。\n");
	scanf("%d%d",&num_1,&num_2);
	gcd=function_gcd(num_1,num_2);
	lcm=function_lcm(num_1,num_2);
	
	printf("最大公约数为%d。\n",gcd);
	printf("最小公倍数为%d。\n",lcm);
	
	return 0;
	
}
