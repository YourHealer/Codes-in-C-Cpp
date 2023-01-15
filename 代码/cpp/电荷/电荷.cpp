#include <stdio.h>
#include <math.h>
int main(){
	int m,q,v,b;
	int ele,mag;
	scanf("%d%d%d%d",&m,&q,&v,&b);
	scanf("%d%d",&ele,&mag);
	printf("%.2f %d\n",(1.0*m*v/b/q),ele^mag);
	return 0;
}
