/*
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int data;
	struct Node* next;
}Node;

Node* head;

void Insert(int num);
void Print(Node* pointer);
void ReversePrint(Node* pointer);

int main() 
{
	head=NULL;
	
	Insert(1);
	Insert(2);
	Insert(3);
	Insert(4);
	Insert(5);
	Print(head);
	ReversePrint(head); 
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
 
 void Print(Node* pointer)
 {
 	if(pointer==NULL)
	{
		printf("\n");
		return;
	}
	printf("%d ",pointer->data);
	Print(pointer->next);
  } 
  
void ReversePrint(Node* pointer)
{
  	if(pointer==NULL)
  	{
  		printf("\n");
  		return;
	}
	ReversePrint(pointer->next);
	printf("%d ",pointer->data);
} 
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int data;
	struct Node* next;
}Node;

Node* Insert(int num,Node* pointer);
void Print(Node* pointer);
void ReversePrint(Node* pointer);

int main() 
{
    Node* head=NULL;
	
	head=Insert(1,head);
	head=Insert(2,head);
	head=Insert(3,head);
	head=Insert(4,head);
	head=Insert(5,head);
	Print(head);
	ReversePrint(head); 
	return 0;
}

Node* Insert(int num,Node* pointer)
{
	Node* temp1=(Node*)malloc(sizeof(Node));
	temp1->data=num;
	temp1->next=NULL;
	if(pointer==NULL)
	{
		pointer=temp1;
	}
	else
	{
		Node* temp2=pointer;
		while(temp2->next!=NULL)
		{
			temp2=temp2->next;
		}
		temp2->next=temp1;
	}
	return(pointer);
 } 
 
 void Print(Node* pointer)
 {
 	if(pointer==NULL)
	{
		printf("\n");
		return;
	}
	printf("%d ",pointer->data);
	Print(pointer->next);
  } 
  
void ReversePrint(Node* pointer)
{
  	if(pointer==NULL)
  	{
  		printf("\n");
  		return;
	}
	ReversePrint(pointer->next);
	printf("%d ",pointer->data);
} 
