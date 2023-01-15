/*
#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int data;
	struct Node* next;
};

struct Node* head;
void Insert (int num,int position);
void Print ();
int main() {
	head=NULL;
	Insert(1,1);
	Insert(3,2);
	Insert(7,1);
	Insert(8,2);
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
		return; 
	}
	
	{
		int index;
		struct Node* temp2=head;
		for(index=0;index<position-2;index++)
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
	printf("\n");
}

*/

#include <stdlib.h>
#include <stdio.h>

struct Node
{
	int data;
	struct Node* next;
};

struct Node* Insert(int num,int position,struct Node* pointer);
void Print(struct Node* pointer);

int main()
{
	struct Node* head;
	head=NULL;
	head=Insert(1,1,head);
	head=Insert(3,2,head);
	head=Insert(7,1,head);
	head=Insert(8,2,head);
	Print(head);
}

struct Node* Insert(int num,int position,struct Node* pointer)
{
	struct Node* temp1=(struct Node*)malloc(sizeof(struct Node));
	temp1->data=num;
	temp1->next=NULL;
	if(position==1)
	{
		temp1->next=pointer;
		pointer=temp1;                        /*唯一的问题在于当head不是全局变量，需要在函数里传head*/
	}                                         /*head本身的改变只在于头结点链接的修改，其余都是借用地址*/ 
	else
	{
		int index;
		struct Node* temp2=pointer;
		for(index=0;index<position-2;index++)
		{
			temp2=temp2->next;
		}
		temp1->next=temp2->next;
		temp2->next=temp1;
	}
		return(pointer);       
}
void Print(struct Node* pointer)
{
	struct Node* temp=pointer;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
