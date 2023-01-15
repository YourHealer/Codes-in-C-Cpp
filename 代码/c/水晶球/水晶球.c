#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//定义水晶球
typedef struct diamond
{
	int len;
	int	wid;
	int hei;
	int ord;
} Dia;

//定义拼接水晶球 
typedef struct find
{
	int sum;
	int pos1;
	int pos2;	
}Find;
 
//定义水晶球数量
int num;

//定义水晶球数组
Dia arr[100010];
Find joint[100010];
 
//定义循环变量
int i;

//定义接收变量
int rec1=0,rec2=0,rec3=0; 

//定义计数变量，用来统计有多少个被拼接后的水晶球
int counter; 

//定义最大值脚标变量 
int max1=0; 
int max2=0; 

//定义交换函数
void swap(int* a,int* b)
{
	(*a)^=(*b);
	(*b)^=(*a);
	(*a)^=(*b);	
} 

//qsort中的比较函数 
int compare(const void* a, const void* b)
{
	Dia* pa=(Dia*)a;
	Dia* pb=(Dia*)b;
	
	if((pb->len)==(pa->len))
	{
		if((pb->wid)==(pa->wid))
		{
			return((pb->hei)-(pa->hei));
		}
		else return((pb->wid)-(pa->wid));
	}
	else return((pb->len)-(pa->len));
}

//主函数 
int main()
{
	//初始化数组
	memset(arr,0,sizeof(arr)); 
	memset(joint,0,sizeof(joint));
	
	//输入水晶球数量
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		//输入各水晶球信息
		scanf("%d",&rec1);
		scanf("%d",&rec2);
		scanf("%d",&rec3);
		
		//进行排序 
		if(rec1<rec2)
		{
			swap(&rec1,&rec2);
		}
		if(rec1<rec3)
		{
			swap(&rec1,&rec3);
		}
		if(rec2<rec3)
		{
			swap(&rec2,&rec3);
		}
		
		//将水晶球信息按从长到短存入长、宽、高中，并把水晶球编号存入结构体数组 
		arr[i].len=rec1; 
		arr[i].wid=rec2;
		arr[i].hei=rec3;
		arr[i].ord=i;
		
	}
	qsort(arr,num,sizeof(Dia),compare);
	
	for(i=0;i<num;i++)
	{
		if(arr[i].hei>arr[max1].hei)
		{
			max1=i;
		}
	}
	//只需要遍历就好，对于只选择一块水晶石的情况 可以做成的水晶球的最大半径是(arr[max1].hei) /2,对应的序号是max1+1
	

	
	for(i=0;i<num-1;i++)
	{
		if((arr[i].len==arr[i+1].len)&&(arr[i].wid==arr[i+1].wid))	
		{
			//记录是哪两块水晶石 
			joint[counter].pos1=arr[i].ord;
			joint[counter].pos2=arr[i+1].ord;
			
			// 
			if((arr[i].hei+arr[i+1].hei)<arr[i].wid)
			{
				joint[counter].sum=(arr[i].hei+arr[i+1].hei);
				
			}
			else joint[counter].sum=arr[i].wid;
			
			counter++;
		}
	} 
	
	for(i=0;i<counter;i++)
	{
		if(joint[i].sum>joint[max2].sum)
		{
			max2=i;
		}
	}
	
	if((arr[max1].hei)>(joint[max2].sum))
	{
		printf("%d\n",1);
		printf("%d\n",arr[max1].ord+1);
	}
	else
	{
		printf("%d\n",2);
		printf("%d %d\n",joint[max2].pos1+1,joint[max2].pos2+1);
	}
	
	return 0;
}
