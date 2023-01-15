#include <stdio.h>
#include <stdlib.h>
#define N 3

int main() 
{
    struct Student
	{
		int num;
		char name[20];
		char gender;
		int score;
		struct Student *next;
		};
	int index;
	
	struct Student stu[N];
	struct Student *head,*pt;
	pt=stu;
	
	printf("ÇëÊäÈëÔªËØ£¡\n"); 
	for(index=0;index<N;index++)
	{
		scanf("%d%s\n%c%d",&((pt+index)->num),((pt+index)->name),&((pt+index)->gender),&((pt+index)->score));
	}
	
	head=&stu[0];
	for(index=0;index<N-1;index++)
	{
		(pt+index)->next=(pt+index+1);	           /*stu[0].next=&stu[1];
	                                                 stu[1].next=&stu[2];*/
	}

	stu[2].next=NULL;
	
	do
	{
		printf("%d\t%s\t%c\t%d\t",pt->num,pt->name,pt->gender,pt->score);
		pt=pt->next;
		printf("\n");
	}
	while(pt!=NULL);
	
	return 0;
}
