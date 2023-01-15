#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	float d,e;
	char g,h;
	scanf("a=%db=%d",&a,&b);
	scanf("%f%e",&d,&e);
	scanf("%c%c",&g,&h);
	printf("%d %d\n",a,b);
	printf("%f %e\n",d,e);
	printf("%c %c\n",g,h);
	 
	return 0;
}
