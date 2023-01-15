#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int tower[200005];//塔数组
//amo是每次取的物品数 能够实现拿完的最小amo即为ans len是tower的长度 mom是妈妈回来的剩余时间
bool tryandtry(int amo,int len,int mom){
		int cnt=0;
		//对于每个塔进行遍历，求解搬运次数
		for(int t=0;t<len;t++)
		{
			cnt+=ceil(tower[t]*1.0/amo);
		}
		//判断能否赶在妈妈回来之前运完
		if(cnt<=mom)
		{
			return true;
		}
		else
		{
			return false;
		}
}

int cutinhalf(int left,int right,int n,int k){
	int mid=ceil(left+0.5*(right-left));
	if((right-left)<=1)
	{
	 	return right;
	}
	else
	{
	 	if(tryandtry(mid,n,k))
		{
	 		return cutinhalf(left,mid,n,k);
	 	}
		else
		{
	 		return cutinhalf(mid,right,n,k);
	 	}
	}
}

int main() 
{
	int times=0;//次数
	int n,k;//定义塔数及妈妈回家的剩余时间

	int max_length=0;
	scanf("%d",&times);
	
	//对于每个案例循环
	for(int i=0;i<times;i++){
		scanf("%d%d",&n,&k);
		memset(tower,0,sizeof(tower));
		
		//输入每个塔的塔高数据
		for(int j=0;j<n;j++){
			scanf("%d",&tower[j]);
		}
		
		//求数组最大值
		for(int u=0;u<n;u++){
			if(tower[u]>max_length){
				max_length=tower[u];
			}
		}
		
		if(tryandtry(max_length,n,k)){
			printf("%d\n",cutinhalf(0,max_length,n,k));
		}else{
			printf("QAQ\n");
		}
		
	}
	return 0;
}
