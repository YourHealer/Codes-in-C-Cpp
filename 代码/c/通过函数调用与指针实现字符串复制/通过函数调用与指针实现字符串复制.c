#include <stdio.h>
#include <stdlib.h>

void duplicate(char* pointer1,char* pointer2);

int main() 
{
	char char1[25];
	char char2[25];
	char* pointer_char1=char1;
	char* pointer_char2=char2;
	
	printf("ÇëÊäÈë×Ö·û´®£¡\n");
	gets(char1);
	
	duplicate(pointer_char1,pointer_char2);
	printf("%s\n",pointer_char1);
	printf("%s\n",pointer_char2);
	puts(pointer_char1);
	puts(pointer_char2);
	
	return 0;
}

void duplicate(char* pointer1,char* pointer2)
{
	int index;
	 
	for(index=0;*(pointer1+index)!=0;index++)
	{
		*(pointer2+index)=*(pointer1+index);
	}
	
	*(pointer2+index)='\0';
	
}
