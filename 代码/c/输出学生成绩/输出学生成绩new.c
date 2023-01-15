#include <stdio.h>
#include <stdlib.h>
#define total 3

typedef struct Info
{
	int num[10];
	char name[20];
	float score[3];
 } Info;

float max=0;

void input(Info stu[total]);
float print(Info stu[total]);

int main() 
{
	Info student[total];
    int index;
    int jacket;
    int flag;
    
	input(student);
	flag=print(student);

	printf("%s\n",student[flag].num);
	printf("%s\n",student[flag].name);
	for(index=0;index<3;index++)
	{
		printf("%f\t",student[flag].score[index]);
	}
	printf("%f\n",max);
	return 0;
}

void input (Info stu[total])
{
	int index;
	int jacket;
	
	for(index=0;index<total;index++)
	{
		printf("请输入学号：");
		scanf("%s",stu[index].num);
		printf("请输入姓名：");
		scanf("%s",stu[index].name);
		printf("请输入成绩：");
		for(jacket=0;jacket<3;jacket++)
		{
			scanf("%f",&(stu[index].score[jacket]));
		} 
	}
	
}


float print(Info stu[total])
{
	int index;
	int jacket;
	int maxi=0;
	float aver;
	
	for(index=0;index<total;index++)
	{
	    int sum=0;
		printf("%s\n",stu[index].num);
		printf("%s\n",stu[index].name);
		for(jacket=0;jacket<3;jacket++)
		{
			sum=sum+(stu[index].score[jacket]);
		} 
		aver=sum/3.0;
		if(max<aver)
		{
			max=aver;
			maxi=index;
		}
		printf("%.2f\n",aver);
	}
	return(maxi);
}
