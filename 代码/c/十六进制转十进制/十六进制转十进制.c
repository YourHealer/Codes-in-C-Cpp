#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char num_16[10];
	char num_10[10]; 
	int length;
	int sum=0; 
	int i;
	
	gets(num_16);
	length=strlen(num_16);
	
	for (i=length-1;i>=0;i--)
	{
		if(num_16[i]>='0'&&num_16[i]<='9')
		{
			num_16[i]=num_16[i]-48;
		}
		else if(num_16[i]>='A'&&num_16[i]<='F')
		     {
			     num_16[i]=num_16[i]-55; 
		     }
		     
		sum=sum+num_16[i]*pow(16,length-1-i);
	}
	
	printf("%d",sum);
	return 0;
}
