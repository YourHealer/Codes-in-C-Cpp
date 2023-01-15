#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define people 3

int main() 
{
	
	void input(char array_1[people][15],char array_2[people][30]); 
	void swap(char array_1[people][15],char array_2[people][30]) ;
	char number[people][15];
	char string[people][30];
	int i;
	
	printf("请输入您的信息！\n");
	input(number,string);
	for(i=0;i<people;i++)
	{
	    puts(number[i]);
		puts(string[i]);
	}
	
	swap(number,string);
	for(i=0;i<people;i++)
	{
	    puts(number[i]);
		puts(string[i]);
	}

	return 0;
}	

void input(char array_1[people][15],char array_2[people][30])
{
	int i;
	for(i=0;i<people;i++)
	{
	    gets(array_1[i]);
		gets(array_2[i]);
	}

 } 
 
 void swap(char array_1[people][15],char array_2[people][30]) 
 {
 	int i,j;
 	for(j=0;j<people-1;j++)
 	{
 		for(i=0;i<people-1-i;i++)
 		{
 			if(strcmp(array_1[i][15],array_1[i+1][15])<0)
 			{
 				char temp_num[15];
 				strcpy(temp_num[15],array_1[i][15]);
 				strcpy(array_1[i][15],array_1[i+1][15]);
				strcpy(array_1[i+1][15],temp_num[15]);
 				
 				char temp_ch[30];
 				strcpy(temp_ch[30],array_2[i][30]);
 				strcpy(array_2[i][30],array_2[i+1][30]);
 				strcpy(array_2[i+1][30],temp_ch);
 				
			}
		}
	 }
	 
 }

