#include <stdio.h>
#include <stdlib.h>
int function(int n)
{
	int c;
	if(n==1) c=1;
	else if(n==2) c=1;
	     else {
	     	c=function(n-1)+function(n-2);
		 }
	return (c);
 } 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int function(int n); 
	int i;
	float add=0;
	for(i=1;i<=20;i++) 
	{
		add=add+1.0*function(i+2)/function(i+1);
	}
	printf("%f",add);
	return 0;
}
