#include <stdio.h>
float abs(float a) { 
	return a>=0?a:-a; 
}
int main(){
	int hour,min;
	scanf("%d%d",&hour,&min);
	float times=abs(6*min-(30*hour+0.5*min));
	if(abs(6*min-(30*hour+0.5*min))>180){
		times=360-abs(6*min-(30*hour+0.5*min));
	}
	if(min<10){
		printf("At %d:0%d the angle is %.1f degrees.\n",hour,min,times);
	}else{
		printf("At %d:%d the angle is %.1f degrees.\n",hour,min,times);
	}
	return 0;
}
