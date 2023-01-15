#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 
#include <string.h>

int num1;
int num2;
int max=0;
int copy1=0;
int copy2=0;
int rest1=0;
int rest2=0;
int arr1[1000];
int arr2[1000];
int arr3[1000];
int i,j,k,u,v;
bool flag;
int cnt=0;

int minus(int a,int b)
{
	return a>b?a:b;
}


int main() 
{
	scanf("%d",&num1);
	scanf("%d",&num2);
	max=minus(num1,num2);
	for(i=2;i<=max;i++)
	{
		copy1=num1;
		copy2=num2;
		j=0;
		k=0;
		memset(arr1,0,sizeof(arr1));
		memset(arr2,0,sizeof(arr2));
		flag=true;
		
		while(copy1>=i)
		{
			rest1=copy1%i;
			arr1[j]=rest1;
			j++;
			copy1=(copy1-rest1)/i;
		}
		arr1[j]=copy1;
		j++;
		
			while(copy2>=i)
		{
			rest2=copy2%i;
			arr2[k]=rest2;
			k++;
			copy2=(copy2-rest2)/i;
		}
		arr2[k]=copy2;
		k++;
		
		if(j>k)
		{
			for(v=0;v<j;v++)
			{
				if(arr1[j-v-1]!=arr2[v])
				{
					flag=false;	
					break;
				}
				
			}
		}
		else
			{
				for(v=0;v<k;v++)
				{
					if(arr1[v]!=arr2[k-v-1])
					{
						flag=false;
						break;
					}
				
				}
			}
			
			if(flag)
			{
				arr3[cnt++]=i;
			}
		
	}
	
	if(cnt>0)
	{
		for(u=0;u<cnt;u++)	printf("%d\n",arr3[u]);
	}
	else printf("-1\n");
	
	return 0;
}
