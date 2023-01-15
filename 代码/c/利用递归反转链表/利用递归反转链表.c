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
void Reverse(Node* pointer);
void Print();

int main() 
{
	head=NULL;
	Insert(1);
	Insert(2);
	Insert(3);
	Insert(4);
	Insert(5);
	Reverse(head);
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

void Reverse(Node* pointer)
{
	if(pointer->next==NULL)
	{
		head=pointer; 
		return;
	}
	Reverse(pointer->next);
	Node* temp2=pointer->next;
	temp2->next=pointer;
	pointer->next=NULL;
	
}
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int data;
	struct Node* next;
}Node;

Node* temp;

Node* Insert(int num,Node* pointer);
Node* Reverse(Node* pointer);
void Print(Node* pointer);

int main() 
{
    Node* head=NULL;
	head=Insert(1,head);
	head=Insert(2,head);
	head=Insert(3,head);
	head=Insert(4,head);
	head=Insert(5,head);
	head=Reverse(head);
	Print(head);
	return 0;
}

Node* Insert(int num,Node* pointer)
{
	Node* temp1=(Node*)malloc(sizeof(Node));    //建立新节点 

	temp1->data=num;
	temp1->next=NULL;                           //输入节点内容，先令其next为空指针 
	
	if(pointer==NULL)                           //若头指针为空，说明原链表里还没有节点 ，将头指针指向该节点 
	{
		pointer=temp1;
	}
	else                                        //若头指针不为空，说明原链表里有结点，先通过循环指向原链表最后一个节点，使该节点指向本节点 
	{
		Node* temp2=pointer;
		while(temp2->next!=NULL)
		{
			temp2=temp2->next;
		}
		temp2->next=temp1;
	}
	return(pointer);                           //更新头指针值 
}

void Print(Node* pointer)                      //利用循环从头到尾遍历链表，输出各节点的数据 
{
	Node* temp1=pointer;
	while(temp1!=NULL)
	{
		printf("%d ",temp1->data);
		temp1=temp1->next;
    }
}


Node* Reverse(Node* pointer)
{

	if(pointer->next==NULL)
	{
	
		temp=pointer;
		return;
	}
	Reverse(pointer->next);
	Node* temp2=pointer->next;
	temp2->next=pointer;
	pointer->next=NULL;
	return(temp);
}

