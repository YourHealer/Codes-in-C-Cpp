#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	int i,j,k;
	int u,v;
	printf("请输入您想求的魔方阵奇数阶数：\n");
	scanf("%d",&n);
	int num[10][10]={0};
	i=0;j=(n-1)/2;
	num[i][j]=1;
	for(k=2;k<=n*n;k++)
	{
		if(i==0)
		{
			u=n-1;
			v=j+1;
			if((num[u][v]!=0)||(i==0&&j==(n-1)))
			{
				i=i+1;
				num[i][j]=k;
			}
			else 
			{
				i=u;
				j=v;
				num[i][j]=k;
			}

			continue; 
			
		}
		else if(j==(n-1))
		     {
			       u=i-1;
			       v=0;
		     	if(num[u][v]!=0||(i==0&&j==(n-1)))
			    {
				    i=i+1;
				    num[i][j]=k;
			    }
			    else
			    {
			       i=u;
			       j=v;
			       num[i][j]=k;
			    }
			 
			   continue;
		     }
		     else 
			 {
			        u=i-1;
		     	    v=j+1;
			 	if(num[u][v]!=0||(i==0&&j==(n-1)))
			    {
				    i=i+1;
				    num[i][j]=k;
			    }
			    else
			    {   i=u;
			        j=v;
		     	    num[i][j]=k;
			    }
		     	
		     	continue;
		     	
			 }                                   /*犯错误错在break语句上，for中嵌套if用break，会导致直接中断for语句，而不是跳出if,如果你闲得非要用一个语句，那就continue吧！*/ 
    }
    
    for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",num[i][j]);
		}
		printf("\n");
	}
	return 0;
}
