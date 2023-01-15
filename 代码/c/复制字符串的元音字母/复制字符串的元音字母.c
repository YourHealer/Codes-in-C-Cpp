#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void function_vowel(char string[],int num)
{
	int k;
	int j=0;
	
	for(k=0;k<num;k++)
	{
		if((string[k]=='a')||(string[k]=='e')||(string[k]=='i')||(string[k]=='o')||(string[k]=='u'))
		{
		putchar(string[k]);
		}
	}                                     /*不能构建数组，以期通过数组记录元素。因为这是临时存储，用完就释放。*/
	
	
}

int main() 
{
	char string[20];
	gets(string);
	
	int length;
	length=strlen(string);
	
	function_vowel(string,length);
	 
	return 0;
}
