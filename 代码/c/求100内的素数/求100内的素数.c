#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int j;
	
	for(i=2;i<=100;i++)
	{
	    int flag=1;      /*标志变量应该在每次外层循环开始的时候更新为1，在内层循环判断是否为0，不能在外层定义并初始化标志变量*/
		for(j=2;j<=(i-1);j++)
		{
			if(i%j==0)
			{
				flag=0;
			}
			
		}
		    if(flag==1)
			{
				printf("%d\t",i);
			}
		
	}
	 
	return 0;
}
