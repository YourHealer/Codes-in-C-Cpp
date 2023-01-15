#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define capacity 100
#define row 10
#define column 10

int main() 
{
	char input[capacity];
	char output[row][column];
	int length;
	int index,jacket;
	int k;
	int flag=0;
	int num=-1;
	
	printf("ÇëÊäÈë×Ö·û´®£¡\n");
	gets(input);
	length=strlen(input);
	
	for(index=0;index<length;index++)
	{
		char temp;
		temp=input[index];
		if((input[index]<'0')||(input[index]>'9'))
		{
			flag=0;
			if(num>=0)
			{
				output[num][k]='\0';
			}
		}
		else
		{
			if(flag==0)
			{
				flag=1;
				num++;
				k=0;
			}
		output[num][k]=temp;
		k++;	
		}
	}
	
	for(jacket=0;jacket<num+1;jacket++)
	{
		printf("%s\n",output[jacket]);
	}

	return 0;
}
