#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//定义结构体类型 
typedef struct Time
{
	int begin;
	int over;	
}Time; 

//定义结构体数组
Time task[300010];
Time replace[300010]; 

//定义循环变量
int i;
int j;

//记录答案
int counter=1; 

void _mergesort(int start,int end)
{
	//递归的终止条件：待排序元素已经是单个值，无法再“递去” 
	if(start>=end) return;
	
	//找寻中间位置 
	int mid=start+((end-start)>>1);
	
	//左区间的左右端点 
	int istart1=start,iend1=mid;
	//右区间的左右端点 
	int istart2=mid+1,iend2=end; 
	
	//先左后右 
	_mergesort(istart1,iend1);
	_mergesort(istart2,iend2); 
	
	int ii=start;
	
	//在左/右序列任一个没有合并结束的前提下 
	while((istart1<=iend1)&&(istart2<=iend2))
	{
		if(task[istart1].over<=task[istart2].over)
		{
			replace[ii++].over=task[istart1++].over;
			ii--;istart1--;
			replace[ii++].begin=task[istart1++].begin;
		}
		else
		{
			replace[ii++].over=task[istart2++].over;
			ii--;istart2--;
			replace[ii++].begin=task[istart2++].begin;
		}
		
	}
	
	//某个方向的数组合并完成 
	while(istart1<=iend1)
	{
		 replace[ii++].over=task[istart1++].over;
		 ii--;istart1--;	
		 replace[ii++].begin=task[istart1++].begin;
	 }
	while(istart2<=iend2) 
	{
		 replace[ii++].over=task[istart2++].over;
		 ii--;istart2--;	
		 replace[ii++].begin=task[istart2++].begin;
	}
	
	//进行拷贝 
	memcpy(task+start,replace+start,(end-start+1)*sizeof(Time));
}


void mergesort(int len) 
{
  if (len<2) return;  
  
  _mergesort(0,len-1);  // 调用递归函数进行排序。
}
 

int main()
{
	//定义任务数量 
	int n;
	
	//初始化 
	memset(task,0,sizeof(task));
	memset(replace,0,sizeof(replace));
	
	//输入
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&task[i].begin,&task[i].over);
	}
	
	//将结构体数组按照结束时间进行归并排序 
	mergesort(n);
	
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(task[j].begin>=task[i].over)
			{
				counter++;
				i=j-1;
				break;
			}
	
		
		}
		
	 } 
	
	printf("%d\n",counter);
	
	return 0;	
} 
