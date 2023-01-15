#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	scanf("%d",&num);
	int x=num;
	int n;
	for(n=0;x>0;n++)
	{
		x=x/10;
	}
	printf("%d\n",n);        /*通过除法取整的方式求解*/
	
/*	int k;
	n=1;x=num;
	while(x>=pow(10,n))
	{
		n++;
	} 
	printf("%d",n);         通过与10的次方作比较求解*/
	
	int value[5];
	int i=0;
	x=num;
	
	for(i;i<n;i++)
	{
		value[i]=x%10;
		x/=10;
	}
	
	printf("从低位到高位的值为：\n"); 
	 for(i=0;i<n;i++)
	 {
	 	printf("%d\n",value[i]);                /*求各位的数值*/ 
	 }
	 
	 printf("将该数反转后的结果为：\n");
	 for(i=0;i<n;i++)
	 {
	 	printf("%d",value[i]);
	 }                                          /*将该数反转*/ 
	 printf("\n");
	return 0;
}


