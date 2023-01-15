#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int j;
	int temp;
	int num[3];
	for(i=100;i<=999;i++)
	{   
	    temp=i;
		for(j=0;j<3;j++)
		{
			num[j]=temp%10;
			temp=temp/10;
		}
		if(i==(num[0]*num[0]*num[0]+num[1]*num[1]*num[1]+num[2]*num[2]*num[2]))
		{
			printf("%d\t",i);
		}
	 } 
	return 0;
}
