#include <stdio.h>
int main(){
	int a,b,c,d;
	scanf("%d %d",&a,&b);
	scanf("%d %d",&c,&d);
	printf("determinant=%d\n",a*d-b*c);
	return 0;
}
