#include<stdio.h>
#include<stdlib.h>
typedef struct book
{
	int num;				//图书编号
	float price;			//图书价格
	struct book *next;		//指向下一个节点的指针
}Book;
Book *head=NULL;			//初始化头指针为空
int n=0;					//总节点数目

//动态添加节点
void Create()
{
	Book *p=NULL;				//用于遍历链接
	Book *p_new=NULL;			//存储新节点的地址
	Book *p_old=NULL;			//存储尾节点的地址
	int num;				//接收用户输入的编号
	if (head!=NULL)
	{
		p=head;
		while (p!=NULL)
			p=p->next;
		p_old=p;			//如果整个链表有结点，进行循环，到结束时，将尾节点地址保存。如果整个链表没有结点， 尾结点地址仍为NULL。 
	}
	while (1)
	{reInput:
		printf("请输入图书编号，按0结束：");
		scanf("%d",&num);
		if (num==0)
		{
			getchar();		//抛弃多余的Enter键
			break;
		}
		p=head;				//获得头指针，用于遍历
		while (p!=NULL)
		{
			if (p->num==num)
			{
				printf("编号重复，请重新输入。\n");
				goto reInput;
			}
			p=p->next;		//进行循环，检查输入编号与当前图书编号是否重复，若重复重新输入，若不重复，取下一个节点的地址检测是否重复。 
		}
		p_new=(Book*)malloc(sizeof(Book));	//创建新节点
		p_new->num=num;		//保存编号
		n++;				//总节点数+1
		if (n==1)
		{
			head=p_new;
		}
		else
		{
			p_old->next=p_new;
		}
		p_old=p_new;
		p_new->next=NULL;
		printf("请输入图书价格：");
		scanf("%f",&p_new->price);
	}
}

//显示所有节点数据
void Show()
{
	Book *p;
	p=head;
	if (p==NULL)
	{
		printf("没有图书信息。\n");
		return;
	}
	printf("图书编号\t图书价格\n");
	while (p!=NULL)
	{
		printf("%d\t\t%.2f\n",p->num,p->price);
		p=p->next;
	}
}
int main()
{
	Create();//动态添加节点
	Show();//显示所有节点数据
	return 0;
}


