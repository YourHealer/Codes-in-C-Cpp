#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
int num;
struct Node* next;
}Node;

Node* head;

void Insert(int value);
void Print();
int n=0;

int main() 
{
   
    
	head=NULL;
	Insert(1);
	Insert(2);
	Insert(3);
	Insert(4);
	Insert(5);
	Insert(6);
	Print();
	return 0;
}

void Insert(int value)
{
	Node* temp1=(Node*)malloc(sizeof(Node));
	temp1->num=value;
	temp1->next=NULL;
	
	if(n==0)
	{
		head=temp1;
		n++;
	}
	else
	{
		Node* temp2=head;
		while((temp2->next)!=NULL)
		{
			temp2=temp2->next;
		}
        temp2->next=temp1;
		n++;                                
	}
}

void Print()
{
	Node* temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->num);
		temp=temp->next;
	}
}
