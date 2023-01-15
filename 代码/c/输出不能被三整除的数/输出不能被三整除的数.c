#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	for(i=100;i<=200;i++)                 /*要注意总计对101个数进行检查*/ 
	{
	if(i%3==0)                            /*这里检验对3能否整除是用“%”号，不是“/”号！*/ 
	{
		continue;                         /*这里continue的出现使得仅结束本次for语句*/ 
		}	
		printf("%d ",i);
	 } 
	return 0;
}
