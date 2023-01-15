#include <stdio.h>
int main(){
	int a11,a12,a13,a21,a22,a23,a31,a32,a33;
	scanf("%d %d %d",&a11,&a12,&a13);
	scanf("%d %d %d",&a21,&a22,&a23);
	scanf("%d %d %d",&a31,&a32,&a33);
	printf("%d %d %d\n",a11,a21,a31);
	printf("%d %d %d\n",a12,a22,a32);
	printf("%d %d %d\n",a13,a23,a33);	
	return 0;
}
