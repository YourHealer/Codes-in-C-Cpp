#include <stdio.h>
#include <stdlib.h>

int main() 
{
	struct Student
	{
		int student_number;
		int score;
		char name[20];
	    char gender; 
	 }; 
	 
	struct Student student_1;
	 
	printf("请输入学生信息!\n");
	scanf("%d%d%s\n%c",&student_1.student_number,&student_1.score,student_1.name,&student_1.gender);
	printf("%d\n%d\n%s\n%c\n",student_1.student_number,student_1.score,student_1.name,student_1.gender);
	
	return 0;
}
