#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num[4];
	int i,j; 
	scanf("%d%d%d%d",&num[0],&num[1],&num[2],&num[3]);
	for(j=0;j<3;j++) 
	{
		for(i=0;i<3-j;i++)
		{
			if(num[i]>num[i+1])
			{
				int temp;
				temp=num[i];
				num[i]=num[i+1];
				num[i+1]=temp;
			}
		}
	}
	printf("四个数从小到大的顺序为：");
	for(i=0;i<4;i++)
	{
		printf("%d ",num[i]);
	}
	return 0;
}
