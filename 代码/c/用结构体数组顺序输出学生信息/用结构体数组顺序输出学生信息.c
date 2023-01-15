#include <stdio.h>
#include <stdlib.h>
#define N 5

int main() 
{
    struct Student 
    {
    	int num;
    	char name[20];
    	char gender;
    	int score;
	};
	
	int index;
	int jacket;
	struct Student stu[N];
	struct Student* pointer=stu; 
	
	printf("请输入学生信息！\n"); 
	for(index=0;index<N;index++)
	{
		scanf("%d%s\n%c%d",&((pointer+index)->num),(pointer+index)->name,&((pointer+index)->gender),&((pointer+index)->score));
	}
	
	for(jacket=0;jacket<(N-1);jacket++)
	{
		for(index=0;index<(N-jacket-1);index++)
		{
			struct Student temp;
			if(((pointer+index)->score)<((pointer+index+1)->score))
			{
				temp=*(pointer+index);
				*(pointer+index)=*(pointer+index+1);
				*(pointer+index+1)=temp;
			}
			
		}
	}

    printf("结果为：\n");
    for(index=0;index<N;index++)
	{
		printf("%d\t%s\t%c\t%d\n",((pointer+index)->num),(pointer+index)->name,((pointer+index)->gender),((pointer+index)->score));
	}
	
	return 0;
}
