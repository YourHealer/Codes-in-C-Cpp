#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int amount;
	amount=1;
	int total; 
	total=amount;
	int i;
	for(i=0;i<9;i++)
	{
		total=(total+1)*2;
	 } 
	 printf("%d\n",total);
	return 0;
}
