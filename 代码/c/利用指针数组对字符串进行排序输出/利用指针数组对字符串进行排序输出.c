#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void order(char** string,int number);
void output(char** string,int number);

int main() 
{                                                                    /*把指针列为数组，分别指向每个字符串的首字符的地址*/ 
	char* pointer[]={"air","none","language","boom"};                /*处理多个已知字符串的方法，节省内存*/ 
	int num=4;
	
	order(pointer,num);
	output(pointer,num);
	
	return 0;
}

void order(char** string,int number)
{
	int index;
	int jacket;
    char* temp;
    
	for(index=0;index<number-1;index++)
	{
		for(jacket=0;jacket<number-index-1;jacket++)
		{
			if(strcmp((*(string+jacket)),(*(string+jacket+1)))>0)
			{
				temp=*(string+jacket);
				*(string+jacket)=*(string+jacket+1);
				*(string+jacket+1)=temp;
			}
		}
	}
}

void output(char** string,int number)
{
	int index;
	for(index=0;index<number;index++)
	{
		printf("%s\n",*(string+index));             /*千万要注意，这里是*(string+index)，不是(string+index)
		                                              前者是对应字符串的字符首地址，后者是对应字符串的对应指针的地址*/ 
	}
}
