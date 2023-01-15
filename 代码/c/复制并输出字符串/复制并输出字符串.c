#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main() 
{

	char array1[25]="I am a handsome boy.";
	char array2[25];
	
	char* pointer1;
    char* pointer2;
    
	pointer1=array1;
	pointer2=array2;
	
	int index;
	int length;
	
	length=strlen(pointer1);
	
	for(index=0;index<length;index++)
	{
		*(pointer2+index)=*(pointer1+index);
		
	} 
	*(pointer2+index)='\0'; 
	
	printf("%s",pointer2); 
	
	return 0;
}

