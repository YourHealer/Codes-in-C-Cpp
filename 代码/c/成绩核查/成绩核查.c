#include <stdio.h>
#include <stdlib.h>
#define student 4
#define lesson 5

void average_lesson(int (*pointer)[lesson],int flag);
void find_bad(int (*pointer)[lesson]);
int average_student(int (*pointer)[lesson],int flag);
void find_good(int (*pointer)[lesson]);

int main() 
{
	int score[student][lesson];
	int index,jacket;
	
	for(index=0;index<student;index++)
	{
		for(jacket=0;jacket<lesson;jacket++)
		{
			scanf("%d",&score[index][jacket]);
		}
	 } 
	 
    average_lesson(score,0);
    find_bad(score);
    find_good(score);
	return 0;
}

void average_lesson(int (*pointer)[lesson],int flag)
{
	int sum=0;
	int index;
	int average;
	
	for(index=0;index<student;index++)
	{
		sum=sum+pointer[index][flag];
	}
	
	average=sum/student;
	
	printf("课程%d的平均成绩为：%d",flag+1,average);
}

void find_bad(int (*pointer)[lesson])
{
	int index,jacket;
	
	for(index=0;index<student;index++)
	{
	    int flag=0;
	    
		for(jacket=0;jacket<lesson;jacket++)
		{
			if(*(*(pointer+index)+jacket)<60)
			{
				flag++;
			}
		}
		
		if(flag>=2)
		{
			printf("学生%d的成绩有至少两门不及格：\n",index+1);
			
			for(jacket=0;jacket<lesson;jacket++)
		    {
			    printf("%d\t",*(*(pointer+index)+jacket));
		    }
		}
		    printf("\n");
	 } 
}

int average_student(int (*pointer)[lesson],int flag)
{
	int jacket;
	int sum=0;
	int average;
	
	for(jacket=0;jacket<lesson;jacket++)
	{
		sum=sum+pointer[flag][jacket];
	}
	
	average=sum/lesson;
	
	return(average);
}

void find_good(int (*pointer)[lesson])
{
	int index;
	int jacket;
	int average;
	
	
	for(index=0;index<student;index++)
	{
	    int flag=1;
		
		for(jacket=0;jacket<lesson;jacket++)
		{
			if(*(*(pointer+index)+jacket)<=85)
			{
				flag=0;
			}
		}
		
		average=average_student(pointer,index);
		if(average>90)
		{
			flag=1;
		}
		
		if(flag==1)
		{
			printf("学生%d是优秀学生，其成绩为：\n",index+1);
			
			for(jacket=0;jacket<lesson;jacket++)
		    {
			    printf("%d\t",*(*(pointer+index)+jacket));
		    }
		    
		    printf("\n");
		}
	}
}
