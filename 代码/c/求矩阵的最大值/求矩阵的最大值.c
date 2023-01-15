#include <stdio.h>
#include <stdlib.h>

int find_max(int array[10][10],int m,int n)
{
int max=array[0][0];
	int i,j;
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(max<array[i][j])
			{
			max=array[i][j];	
			}
		}
	 } 
	return(max);
} 

int main() 
{
	int matrix[10][10];
	int m,n;
	int i,j;
	
	printf("请输入行与列！\n");
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	 } 
	
	int result; 
	result=find_max(matrix,m,n);
	printf("最大值为：%d。",result);
	return 0;
}
