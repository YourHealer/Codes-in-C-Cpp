#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <queue> 

using namespace std;

int n;//定义数据组数
int num;//定义同学个数
int arr1[500100];
int arr2[500100];

int main() 
{
	//输入数据组数 
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)			//用例
	{
		//对每组数据进行输入与操作 
		scanf("%d",&num);
		int mid_x=0;
		int mid_y=0;
		long long cnt=0;
		memset(arr1,0,sizeof(arr1));
		memset(arr2,0,sizeof(arr2));
		
		priority_queue< int,vector<int>,less<int> >xbig;  
		priority_queue< int,vector<int>,greater<int> >xsma; 
		priority_queue< int,vector<int>,less<int> >ybig;  
		priority_queue< int,vector<int>,greater<int> >ysma; 
		printf("Case: %d\n",n);
		
		for(int j=0;j<num;j++)		//数据
		{
			cnt=0;
			scanf("%d %d",&arr1[j],&arr2[j]);
			
			if(j==0)
			{
				mid_x=arr1[0];
			}
			else
			{
				if(arr1[j]>mid_x)
				{
					xsma.push(arr1[j]);
				}
				else xbig.push(arr1[j]);
			} 
			
			int k=(xbig.size()-xsma.size());
				if(k>1)
				{
					xsma.push(mid_x);
					mid_x=xbig.top();
					xbig.pop();
				}
				
			int u=(xsma.size()-xbig.size());
				if(u>1)
				{
					xbig.push(mid_x);
					mid_x=xsma.top();
					xsma.pop();
				}
				
					if(j==0)
					{
						mid_y=arr2[j];
					}
					else
					{
						if(arr2[j]>mid_y)
						{
							ysma.push(arr2[j]);
						}
							else ybig.push(arr2[j]);
					} 
					
					int v=(ybig.size()-ysma.size());
						if(v>1)
						{
							ysma.push(mid_y);
							mid_y=ybig.top();
							ybig.pop();
						}
					int w=(ysma.size()-ybig.size());
						if(w>1)
						{
							ybig.push(mid_y);
							mid_y=ysma.top();
							ysma.pop();
						}
					
						if(j%2==1)
						{
							if(k>0)
							{
								mid_x=(mid_x+xbig.top())/2;
							}
							if(u>0)
							{
								mid_x=(mid_x+xsma.top())/2;
							}
													
								if(v>0)
								{
									mid_y=(mid_y+ybig.top())/2;
								}
								if(u>0)
								{
									mid_y=(mid_y+ysma.top())/2;
								}
											
						}	
						//结果加和   
													   for(int z=0;z<=j;z++)
													   {
													   	cnt+=(llabs(mid_x-arr1[z])+llabs(mid_y-arr2[z]));
													   }   
													              
													//输出结果   
													    printf("%lld.0000\n",cnt); 						
		}
				 							
	}

	return 0;
}
