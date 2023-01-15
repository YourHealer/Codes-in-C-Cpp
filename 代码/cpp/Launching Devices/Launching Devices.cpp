#include <stdio.h>
#include <math.h>
int main(){
	float ma,mb,wa,wb,va_ori,vb_ori,vb_aft,part1,part2;
	scanf("%f%f%f%f",&ma,&mb,&wa,&wb);
	va_ori=sqrt(2*wa/ma);
	vb_ori=sqrt(2*wb/mb);
	part1=(mb-ma)*vb_ori/(ma+mb);
	part2=2*ma*va_ori/(ma+mb);
	if((mb-ma)<0){
		vb_aft=(-part1+part2);
	}else{
		if(vb_ori>va_ori){
			vb_aft=vb_ori;
		}else{
			vb_aft=(part1+part2);
		}
	}
	printf("%.2f\n",vb_aft*mb);
	return 0;
}
