#include <stdio.h>
#include <stdlib.h>
#define name 3
#define score 4  
#define num 12

int average(int* pointer1,int number);
void get_to_know(int (*pointer2)[score],int person);
void search(int (*pointer3)[score]);

int main() 
{
	int information[name][score]; 
	int index;
	int jacket;
	int aver;
	int person;
	
	printf("please input the scores of the students.\n"); 
	for(index=0;index<name;index++)
	{
		for(jacket=0;jacket<score;jacket++)
		{
			scanf("%d",(*(information+index)+jacket));
		}
	}
	
	aver=average(*information,num);
	printf("the average of the scores is %d.\n",aver);
	
	printf("whose score do you want to know?\n");
	scanf("%d",&person);
	get_to_know(information,person);
	search(information);
	
	return 0;
}

int average(int* pointer1,int number)
{
	int sum=0;
	int index;
	
	for(index=0;index<number;index++)
	{
		sum=sum+*(pointer1++);
	}
	
	int result;
	result=sum/number;
	
	return(result);

}

void get_to_know(int (*pointer2)[score],int person)
{
	int index;
	
	printf("该同学的成绩是："); 
	
	for(index=0;index<score;index++)
	{
		printf("%d ",*(*(pointer2+person-1)+index));
	}
	
	printf("\n");
	
}

void search(int (*pointer3)[score])
{
	int index,jacket;
	int flag;
	
	for(index=0;index<name;index++)
	{
		flag=0;
		
		for(jacket=0;jacket<score;jacket++)
		{
			if((*(*(pointer3+index)+jacket))<60)
			{
				flag=1;
			}
		}
		
		if(flag==1)
		{ 
		    printf("第%d个学生成绩不及格。\n其各科成绩为:",index+1);
		    
			for(jacket=0;jacket<score;jacket++)
		    {
		    printf("%d ",*(*(pointer3+index)+jacket));
		    }
		} 
	}
	
}

