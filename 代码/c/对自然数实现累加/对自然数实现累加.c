#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	int num=0;
	int i;
	printf("您想要对自然数求和到多少？\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		num+=i;
	}
	printf("求和结果是：%d.\n",num);
	return 0;
}
