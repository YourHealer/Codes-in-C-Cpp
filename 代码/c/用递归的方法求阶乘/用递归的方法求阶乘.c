#include <stdio.h>
#include <stdlib.h>
int follow_multiply(int x)
{
	int result=1;
	
	if(x==1||x==0)
{
	result=1;
}

if(x>1)
{
    while(x>1)
    {
	result=result*x;
	x--;
    }	
}

return(result);
	
} 
int main()
{
	int n;
	int jacket;
	printf("请您输入您想求阶乘的数。\n"); 
	scanf("%d",&n);
	jacket=follow_multiply(n);
	printf("结果是%d。",jacket);
	return 0;
}
