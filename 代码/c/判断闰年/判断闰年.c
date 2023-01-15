#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int flag=0;
	int year;
	scanf("%d",&year);
	  if((year%4==0)&&(year%100!=0))
	  {
	  	flag=1;
	  }
	  if(year%400==0)
	  {
	  	flag=1;
	  }
	  if(flag==1) printf("是闰年哦，giegie！\n"); 
	  else printf("不是闰年哦，giegie！\n");
	return 0;
}
