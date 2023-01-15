#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<i;j++)
		{
			printf(" ");
		}
		for(j=0;j<5;j++)
		{
			printf("* ");
		}
		printf("\n"); 
	 } 
	return 0;
}
