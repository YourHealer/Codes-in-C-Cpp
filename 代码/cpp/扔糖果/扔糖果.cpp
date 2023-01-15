#include <stdio.h> 
#include <string.h> 
#include <math.h> 
int main(){ 
	long double x,y,r,x0,y0,xnew,ynew; 
	int times; 
	scanf("%d",&times); 
	for(int i=0;i<times;i++){ 
		scanf("%Lf%Lf%Lf%Lf%Lf",&x,&y,&r,&x0,&y0); 
		xnew=fabs(x-x0);
		ynew=fabs(y-y0);
		
	} 
	return 0;
}  
