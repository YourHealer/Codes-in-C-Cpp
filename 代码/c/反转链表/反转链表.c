#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
	int data;
	struct Node* next;
}Node;

Node* head;

void Insert(int num);
void Print();
void Invert();

int main() 
{
	head=NULL;
	Insert(1);
	Insert(2);
	Insert(3);
	Insert(4);
	Insert(5);
	Print();
	Invert();
	Print();
	return 0;
}

void Insert(int num)
{
	Node* temp1=(Node*)malloc(sizeof(Node));
	temp1->data=num;
	temp1->next=NULL;
	if(head==NULL)
	{
		head=temp1;
	}
	else
	{
		Node* temp2=head;
		while(temp2->next!=NULL)
		{
			temp2=temp2->next;
		}
		temp2->next=temp1;
	}
}

void Print()
{
	Node* temp1=head;
	while(temp1!=NULL)
	{
		printf("%d ",temp1->data);
		temp1=temp1->next;
	}
}

void Invert()
{
	Node* prev;
	Node* temp;
	Node* later;
	temp=head;
	prev=NULL;
	while(temp!=NULL)
	{
		later=temp->next;
		temp->next=prev;            //temp->next记录上一个结点的地址 
		prev=temp;
		temp=later;
	}
	head=prev;
}
