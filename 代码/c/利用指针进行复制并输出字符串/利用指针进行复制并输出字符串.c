#include <stdio.h>
#include <stdlib.h>
#

int main() 
{
	
	char array1[25]="I am a handsome boy.";
	char array2[25];
	
	char* pointer1;
    char* pointer2;
    
	pointer1=array1;
	pointer2=array2;
	
	int length;
	length=strlen(pointer1);
	
	duplicate(pointer1,pointer2,length);
	
	printf("%s",pointer2);
	
	return 0;
}

void duplicate(char* pointer1,char* pointer2,int length)
{
	int index;
	
		for(index=0;index<length;index++)
	{
		*(pointer2+index)=*(pointer1+index);
		
	} 
	    *(pointer2+index)='\0';                /*要注意加'\0'使得字符串能结束。*/
	    
} 
