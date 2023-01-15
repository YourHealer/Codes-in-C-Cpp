#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define row 5
#define column 10

/*void order(char (*pointer)[column]);

int main() 
{
	char array[row][column];
	int index;
	
	for(index=0;index<row;index++)
	{
		gets(array[index]);
	}
	
	order(array);
	
	for(index=0;index<row;index++)
	{
		puts(array[index]);
	}

	return 0;
}	

void order(char (*pointer)[column])
{
	int index;
	int jacket;
	
	for(jacket=0;jacket<row-1;jacket++)
	{
		for(index=0;index<row-jacket-1;index++)
	{
		if(strcmp(*(pointer+index),*(pointer+index+1))>0)                      利用数组指针
		{
			char temp[column];
			strcpy(temp,*(pointer+index));
		    strcpy(*(pointer+index),*(pointer+index+1));
		    strcpy(*(pointer+index+1),temp);

		}
	}
	
		
	}
}
*/

/*
void order(char** pointer);                参数部分可换为     char* pointer[]                              

int main() 
{
    char array[row][column];
	int index;
	char* p[column];
	
	for(index=0;index<row;index++)
	{ 
	    *(p+index)=*(array+index);
    }
    
    order(p);
	
	for(index=0;index<row;index++)
	{
		gets(array[index]);
	}
	
	
	order(p);                                                                     利用指针数组或多重指针 
	
	for(index=0;index<row;index++)
	{
		puts(array[index]);
	}

	return 0;
}                      

void order(char** pointer)                 参数部分可换为     char* pointer[] 
{
	int index;
	int jacket;
	
	for(jacket=0;jacket<row-1;jacket++)
	{
		for(index=0;index<row-jacket-1;index++)
	{
		if(strcmp(*(pointer+index),*(pointer+index+1))>0)                      
		{
			char temp[column];
			strcpy(temp,*(pointer+index));
		    strcpy(*(pointer+index),*(pointer+index+1));
		    strcpy(*(pointer+index+1),temp);

		}
	}
	

	}
}              
*/  
