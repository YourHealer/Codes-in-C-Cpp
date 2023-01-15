#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int a;
	int b;
	a=33;
	b=69;
	int eor=0;
	eor=a^b;
	int rightone;
	rightone=eor&(~eor+1);
	printf("%d",rightone); 
	return 0;
}
