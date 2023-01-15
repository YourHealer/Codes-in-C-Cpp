#include <stdio.h>
int main(){
//	(1,0)(2,0)(3,0)
	char a,b,c,d,e,f,g,h,i;
	int x1,y1,x2,y2,x3,y3;
	scanf("%c%d%c%d%c%c%d%c%d%c%c%d%c%d%c",&a,&x1,&b,&y1,&c,&d,&x2,&e,&y2,&f,&g,&x3,&h,&y3,&i);
	int m1=x2-x1;
	int n1=y2-y1;
	int m2=x3-x1;
	int n2=y3-y1;
	if(m1*n2==m2*n1){
		printf("Yes\n");
	}else{
		printf("No\n");
	}
	return 0;
}
