#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int times;
	float total=0;
	int i; 
	for(i=1;i<=10;i++)
	{
		if(i==1)
		{
			total=total+100;
		}
		else
		total=total+2*100*pow(0.5,(i-1));
	 } 
	 printf("总共走过的路程为：%fm。\n",total);
	 printf("弹跳高度为：%fm。",100*pow(0.5,10));
	return 0;
}
