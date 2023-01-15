#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int i;
	int j;
    int add;
	for(i=2;i<=1000;i++)
	{   
	    add=0;                               /*要保证在每个数的判断开始时，add应该归于0.因此不能int add=0就完了，应该在此处设置让每一次加法运算前add为0！！！！*/ 
		for(j=1;j<i;j++)
		{   
		    
			if(i%j==0)
			{
			add=add+j;
			}
				
		}
		if(i==add)
		{
			printf("%d\n",i);
		}
		
	} 
	return 0;
}
