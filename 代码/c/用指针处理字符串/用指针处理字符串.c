#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define num 10
#define amount 10

void order(char* pointer[]); 

int main() 
{
	char* string[]={"helium","uncle","daddy","paradise","baby","hello","hi","I","diamond","pig"};
	int i;

	order(string);
	
	for(i=0;i<num;i++) 
	{
		printf("%s\n",string[i]);
	}
	
	return 0;
}

void order(char* pointer[])
{
	int index,jacket;
	
	for(jacket=0;jacket<num-1;jacket++)
	{
		for(index=0;index<num-jacket-1;index++)
		{
			char* temp;
			
			if(strcmp(*(pointer+index),*(pointer+index+1))>0)
			{
				temp=*(pointer+index);
				*(pointer+index)=*(pointer+index+1);
				*(pointer+index+1)=temp;
			}
			
		}
	}
}
