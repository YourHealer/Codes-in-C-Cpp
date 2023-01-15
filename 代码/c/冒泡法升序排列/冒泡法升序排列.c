#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j;
	float num[10];
	printf("请输入数值大小！\n");
	for(i=0;i<10;i++)
	{
		scanf("%f",&num[i]);
	 } 
	 for(j=0;j<9;j++)
	 {
	 	for(i=0;i<9-j;i++)
	 	{
	 		float temp;
	 		if(num[i+1]<num[i]) 
	 		{
	 			temp=num[i];
	 		num[i]=num[i+1];
	 		num[i+1]=temp;
			 }
	 		
		 }
	 }
	 for(i=0;i<10;i++)
	 {
	 	if(i%5==0)
	 	{
	 		printf("\n");
		 }
	 	printf("%f\t",num[i]);
	 }
	return 0;
}
