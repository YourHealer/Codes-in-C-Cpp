#include <stdio.h>
#include <stdlib.h>

float Legendre(float x,int n)
{
	float c;
	
	if (n==0) c=1;
	else if (n==1) c=x;
	     else 
		 {
		 	c=((2*n-1)*x*Legendre(x,n-1)-(n-1)*Legendre(x,n-2))/n;
		 } 
	
	return(c);
}


int main() 
{
	float x;
	int n;
	
	printf("请输入自变量值与勒让德阶数。\n");
	scanf("%f%d",&x,&n);
	
	float result;
    result=Legendre (x,n);
    printf("结果是%.2f。\n",result);
    
	return 0;
}
