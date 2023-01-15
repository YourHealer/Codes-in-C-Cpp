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

int main(int argc, char *argv[]) {
	int function(int n);
	int i;
	for(i=1;i<=40;i++)
	{
	printf("%d\t",function(i));	
	}
	
	return 0;
}
