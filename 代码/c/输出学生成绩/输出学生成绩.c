#include <stdio.h>
#include <stdlib.h>
#define total 1
typedef struct Info
{
	int num[10];
	char name[20];
	float score[3];
 } Info;

void print(Info stu[total])
{
	int index;
	int jacket;
	
	for(index=0;index<total;index++)
	{
		printf("%s\n",stu[index].num);
		printf("%s\n",stu[index].name);
		for(jacket=0;jacket<3;jacket++)
		{
			printf("%f\t",(stu[index].score[jacket]));
		} 
		printf("\n");
	}
}

void print(Info stu[total]);
int main() 
{
	Info student[total];
	int index;
	int jacket;
	
	for(index=0;index<total;index++)
	{
		printf("请输入学号：");
		scanf("%s",student[index].num);
		printf("请输入姓名：");
		scanf("%s",student[index].name);
		printf("请输入成绩：");
		for(jacket=0;jacket<3;jacket++)
		{
			scanf("%f",&(student[index].score[jacket]));
		} 
	}
	
	print(student);
	
	return 0;
}
