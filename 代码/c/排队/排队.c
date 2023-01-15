#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//定义砖头高度数组 
int arr[300010];
int arrtmp[300010]; 
	
long long int counter=0;

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
		//如果是普通的排序，在哪里取等号就不重要，但是如果要计算逆序数，就会有差别，千万注意！ 
		if(arr[istart1]<=arr[istart2])
		{
			arrtmp[ii++]=arr[istart1++];
		}
		else
		{
			arrtmp[ii++]=arr[istart2++];
			counter+=(mid+1-istart1);
		}
		
	}
	
	while(istart1<=iend1)
	{
		 arrtmp[ii++]=arr[istart1++];	
	 }
	while(istart2<=iend2) 
	{
		arrtmp[ii++]=arr[istart2++];
	
	}
	
	memcpy(arr+start,arrtmp+start,(end-start+1)*sizeof(int));
}

void mergesort(int len)
{
	//如果只有一个数，无需排序，直接返回 
	if(len<2) return;
	
	_mergesort(0,len-1); 
 } 

int main() 
{
	//定义砖头数量 
	int n;

	//初始化 
	memset(arr,0,sizeof(arr));
	
	//定义循环变量
	int i;
	
	//进行输入 
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	} 

	//调用函数进行归并排序 
	mergesort(n);
	
	printf("%lld\n",counter); 
	return 0;
}
