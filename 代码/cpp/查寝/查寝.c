#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct Info
{
	int num;
	int top;
	int bot;	
}Info;							//定义盒子结构体 

typedef struct New
{
	int side1;
	int side2;
}New;

int n;									//定义物品次数 
int m; 									//定义操作次数 

Info box[100005];						//定义盒子数组，了解各盒子中的物品数，顶部物品，底部物品 
New next[100005];						//定义物品数组，了解其相邻物品 
bool flag[100005];						//定义标志数组，判断该物品是否已经输出过 

int x=0,y=0;	//操作对象
int temp;		//临时变量
int i,j;		//循环变量

int main() 
{	
	scanf("%d%d",&n,&m);
	
	//盒子赋值
	for(i=1;i<=n;i++)
	{
		box[i].num=1;
		box[i].top=i;
		box[i].bot=i;
	}							
	memset(next,0,sizeof(next));
	memset(flag,0,sizeof(flag));//初始化
	
	//移位操作
	for(i=1;i<=m;i++)
	{
		scanf("%d %d",&x,&y);			//输入操作对象
		if(box[x].num==0)
		{
			continue;					//x盒为空
		}
		else if(box[y].num==0)			//y盒为空
			{
				//y盒为空的next操作 
				box[y].num=box[x].num;
				box[y].top=box[x].bot;
				box[y].bot=box[x].top;	//更新y盒 
				
				box[x].num=0;
				box[x].top=0;
				box[x].bot=0;			//清空x盒
			}
			else 						//x,y盒均不空
			{
				//更新next，在两盒均非空的前提下
				if(next[box[y].top].side1==0)
				{
					next[box[y].top].side1=box[x].top;
				}
				else if(next[box[y].top].side2==0)
					 {
						 next[box[y].top].side2=box[x].top;
					 }
				
				
				if(next[box[x].top].side1==0)
				{
					next[box[x].top].side1=box[y].top;
				}
				else if(next[box[x].top].side2==0)
					{
						next[box[x].top].side2=box[y].top;
					}
					else break;
	
				box[y].num+=box[x].num;
				box[y].top=box[x].bot; //更新y盒 

				box[x].num=0;
				box[x].top=0;
				box[x].bot=0;			//清空x盒
			} 
	}
	
	//输出
	for(i=1;i<=n;i++)
	{
		if(box[i].num==0)	//盒子为空
		{
			printf("0\n");
			continue;
		}
		else
		{
			//盒子非空 
			printf("%d",box[i].num);
			temp=box[i].top;
			for(j=1;j<=box[i].num;j++)
			{
				printf(" %d",temp);
				flag[temp]=1;
				
				if((next[temp].side1!=0)&&(flag[next[temp].side1]==0))
				{
					temp=next[temp].side1;
				}
				else if((next[temp].side2!=0)&&(flag[next[temp].side2]==0))
					{
						temp=next[temp].side2;
					}
					else break;
			}
			printf("\n");
		}
	} 
	return 0;
}
