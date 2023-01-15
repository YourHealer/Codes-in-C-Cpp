#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
	int flag;
	int key;
	
	printf("请您输入您想求的二维数组的行与列！\n");
	int num[10][10];
	int row,column;
	scanf("%d%d",&row,&column);
	
	printf("请为您的二维数组赋值！\n"); 
	int i,j,k;
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			scanf("%d",&num[i][j]);
		}
		
	} 
	 
	 for(j=0;j<column;j++)
{
	 
	 int signal;
	 i=0;
	 signal=num[i][j];
	 
	 int mark=i;
	 
	 for(i=1;i<row;i++)
	 {
	 
	 	if(num[i][j]<signal)
	 	{
	 		signal=num[i][j];
	 		mark=i;
		}
		
	 }
	 
	
	 key=num[mark][j];
	 flag=1;
	 
	 for(k=0;k<column;k++)
	 {
	 	if(key<num[mark][k])
	 	{
	 		flag=0;
		}
	 }
	 if(flag==1)
	 {
	 	printf("%d\n",key);
	 }
	
}
	 
	return 0;
}
