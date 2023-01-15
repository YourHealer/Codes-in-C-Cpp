#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char string1[20];
	char string2[20];
	char string3[20];
	char max[20];
	
	gets(string1);
	gets(string2);
	gets(string3);

    if(strcmp(string1,string2)>0)
	{
	strcpy(max,string1);	
	}
	else 
	{
	strcpy(max,string2);
	}
	
	if(strcmp(max,string3)<0)
	{
		strcpy(max,string3);
	}
	
	printf("最大的字符串是：\n");
	puts(max);
	return 0;
}
