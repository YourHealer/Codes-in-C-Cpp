#include <stdio.h>
#include <stdlib.h>


int main() 
{
	struct Student
	{
		int number;
		char name[20];
		int score;
	};
	
	struct Student student_1,student_2;
	
	printf("请输入学生信息！\n");
	scanf("%d%s%d",&student_1.number,student_1.name,&student_1.score);
    scanf("%d%s%d",&student_2.number,student_2.name,&student_2.score);
    
    if(student_1.score>student_2.score)
    {
    	printf("%d\n%s\n%d\n",student_1.number,student_1.name,student_1.score);
	}
	else
	{
		printf("%d\n%s\n%d\n",student_2.number,student_2.name,student_2.score);
	}
	return 0;
}
