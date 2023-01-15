#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	scanf("%d",&n);
	int i;
	int flag=1;
	for(i=2;i<=(n-1);i++)
	{
		if(n%i==0)
		{
			flag=0;
		}
	 } 
	 if(flag==0) printf("不是素数。\n");
	 if(flag==1) printf("是素数。\n"); 
	return 0;
}
