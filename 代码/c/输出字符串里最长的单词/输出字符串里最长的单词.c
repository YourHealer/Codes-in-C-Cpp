#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int number[20];
int j=0;
int record;

void find_longest(char string[],int num)
{
	int i; 
	for(i=0;i<num+1;i++)
	{
	    if((string[i]=' ')||(string[i]='\0'))
	    {
		number[j]=i;
		j++;
		}	
	}
	record=j;
}

int main()
{
    int i;
	char array[20];
	gets(array);
	
	int length;
	length=strlen(array);
	
	find_longest(array,length);
	

	int mark;
	for(i=0,mark=0;i<record-1;i++)
	{
		if((number[i+1]-number[i])<(number[i+2]>number[i+1]))
		{
			mark=i+1;
		}
	}
	
	for(i=number[mark]+1;i<number[mark+1];i++)
	{
		printf("%c",array[i]);
	}
	
	return 0;
}
