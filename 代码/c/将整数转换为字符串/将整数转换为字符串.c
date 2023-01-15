#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	scanf("%d",&num);
	int counter=0;
	
	int array[10];
	int i;
	for(i=0;num!=0;i++)
	{
		array[i]=num%10+'0';
		num=num/10;
		counter++;
	}
	for(i=counter-1;i>=0;i--)
	{
		printf("%c",array[i]);
		putchar(32);                              /*putchar(32)ÊÇÊä³ö¿Õ¸ñ£¡*/ 
	}
	return 0;
}
