#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node* next;
};
 
struct Node* head;

void Insert(int num,int position);
void Print();
void Delete(int position);
int main() 
{
	head=NULL;
	Insert(1,1);
	Insert(5,2);
	Insert(8,1);
	Insert(4,1);
	Insert(7,3);
	Delete(4);
	Delete(1);
	Print();
	return 0;
}

void Insert(int num,int position)
{
	struct Node* temp1=(struct Node*)malloc(sizeof(struct Node));
	temp1->data=num;
	temp1->next=NULL;
	if(position==1)
	{
		temp1->next=head;
		head=temp1;
	}
	else
	{
		int i;
		struct Node* temp2=head;
		for(i=0;i<position-2;i++)
		{
			temp2=temp2->next;
		}
		temp1->next=temp2->next;
		temp2->next=temp1;
	}
}

void Print()
{
	struct Node* temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}

void Delete(int position)
{
	struct Node* temp1=head;
	if(position==1)
	{
		head=temp1->next;
		free(temp1);
	}
	else
	{
		int i;
		for(i=0;i<position-2;i++)
		{
			temp1=temp1->next;
		}
		struct Node* temp2=temp1->next;
		temp1->next=temp2->next;
		free(temp2);
	}
}
