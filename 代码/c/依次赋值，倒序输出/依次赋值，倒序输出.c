#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num[10];
	int i;
	for(i=0;i<=9;i++) 
	{
		num[i]=i;
	}
	
	for(i=9;i>=0;i--)
	{
		printf("%d ",num[i]);
	}
	return 0;
}
