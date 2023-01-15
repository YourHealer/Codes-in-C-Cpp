#include <stdio.h>
#include <stdlib.h>
#define name 3
#define score 4

int* search(int (*pointer1)[score],int n);
int* find(int (*pointer1)[score]);
int main() 
{
	int matrix[name][score];
	int index,jacket;
	int order;
	int* pointer1;
	int* pointer2;
	
	printf("please input scores of students!\n");
	 
	for(index=0;index<name;index++)
	{
		for(jacket=0;jacket<score;jacket++)
		{
			scanf("%d",(*(matrix+index)+jacket));
		}
	}
	
	printf("你想知道第几个的成绩？\n");
	scanf("%d",&order);
	
	pointer1=search(matrix,order-1);
	
	for(jacket=0;jacket<score;jacket++)
	{
		printf("%d ",*(pointer1+jacket));
	}
	
	printf("成绩不合格的学生：");
	for(index=0;index<name;index++)
	{
	    pointer2=find(matrix+index);
		
		if(pointer2!=NULL)
		{
			printf("学生%d",index+1);
			for(jacket=0;jacket<score;jacket++)
			{
				printf("%d",*(pointer2+jacket));
			}
			
		}	
	} 
	
	return 0;
}

int* search(int (*pointer1)[score],int n)
{
	int* pointer2;
	
	pointer2=*(pointer1+n);
	
	return(pointer2);
	
}

int* find(int(*pointer1)[score])
{
	int* pointer2;
	int jacket;
	int flag=0;
	
	for(jacket=0;jacket<score;jacket++)
	{
		if(*(*pointer1+jacket)<60)
		{
			flag=1;
		}
	}
	
	if(flag==0)
	{
		pointer2=NULL;
	}
	else pointer2=*pointer1;
	
	returm(pointer2);
	
}
