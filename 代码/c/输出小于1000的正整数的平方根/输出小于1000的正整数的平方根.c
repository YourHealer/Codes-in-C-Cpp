#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	scanf("%d",&num);
	if(num>=1000)
	{
		for(;num>=1000;)
		{
		printf("what you input is not smaller than 1000, plz input a number again!\n");
		scanf("%d",&num);	
		}
	 } 
	 if(num<1000)
	 {
	 	float result;
	 	result=sqrt(num);
	 	printf("what you input is correct! the answer is:¡À%.0f.\n",result);
	 }
	return 0;
}
