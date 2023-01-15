#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num[4][5];
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&num[i][j]);
		}
	 } 
	 int max=num[0][0];
	 int row=1,column=1;
	 for(i=0;i<4;i++)
	 {
	 	for(j=0;j<5;j++)
	 	{
	 		if(max<num[i][j])
	 		{
	 			max=num[i][j];
	 			row=i+1;
	 			column=j+1;
			 }
		 }
	 }
	 printf("the biggest number is %d, its row is %d, its column is %d.\n",max,row,column);
	return 0;
}
