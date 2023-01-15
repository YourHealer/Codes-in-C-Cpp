#include <stdio.h>
#include <stdlib.h>
#define num 20 

void cutout(char* pointer1,char* pointer2,int n,int m);

int main() 
{
	char num_1[num];
	char num_2[num];
	int m,n;
	
	printf("请输入字符串！\n");
	gets(num_1);	
	
	printf("请输入字符串长度以及开始截取的首位置！\n");
	scanf("%d%d",&n,&m);

	
	
	cutout(num_1,num_2,n,m);
	
	puts(num_2);
	
	return 0;
}

void cutout(char* pointer1,char* pointer2,int n,int m)
{
	int index;
	
	for(index=m-1;index<n;index++)
	{
		*(pointer2+index)=*(pointer1+index);
	}
	    *(pointer2+index)='\0';
}


















