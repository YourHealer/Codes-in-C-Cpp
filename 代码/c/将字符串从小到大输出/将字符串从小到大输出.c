#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#define row 3
#define column 10

void order_two(char* pointer1,char* pointer2);
void order_three(char (*pointer)[column]);

int main() {
	char string[row][column];
	int index;
	
	for(index=0;index<row;index++)
	{
		gets(string[index]);
	}
	
	order_three(string);
	
    for(index=0;index<row;index++)
	{
		puts(string[index]);
	}
	
	return 0;
}

void order_three(char (*pointer)[column])
{
	order_two(*(pointer),*(pointer+1));
	order_two(*(pointer),*(pointer+2));
	order_two(*(pointer+1),*(pointer+2));
 } 
 
 
void order_two(char* pointer1,char* pointer2)
{
	if(strcmp(pointer1,pointer2)>0)
	{
		char temp[column];
		
		strcpy(temp,pointer1);
		strcpy(pointer1,pointer2);
		strcpy(pointer2,temp);
		
	}
}
 
 
 
 
 
