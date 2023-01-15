#include <stdio.h>
#include <stdlib.h>
int max(int x,int y)
{
	int biggest;
	biggest=(x>y?x:y);
	return(biggest);
}

int main() 
{
	int num[10];
	int i;
	int before;
	int after;
	int counter=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&num[i]); 
	}
	for(i=1,after=num[0];i<=9;i++)
	{
		before=after;
		after=max(before,num[i]);
		if(before!=after)
		{
			counter=i;
		}
	}
	printf("%d,%d",after,counter+1);
	return 0;
}
