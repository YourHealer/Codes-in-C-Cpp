#include <stdio.h>
int judgeLeftLegal(float left,float pos){
	if(left<=pos){
		return 1;
	}else{
		return 0;
	}
}
int judgeRightLegal(float right,float pos){
	if(right>=pos){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	float v,x1,x2,x3,s,t;
	float left1,left2,left3,right1,right2,right3;
	float left,right,res;
	scanf("%f%f%f%f%f%f",&v,&x1,&x2,&x3,&s,&t);
//Ïò×óÒÆ¶¯
	if(judgeLeftLegal(s,x1)){
		left1=(x1-s)/v;
	}else{
		left1=0;
	};
	if(judgeLeftLegal(s,x2)){
		left2=(x2-s)/v;
	}else{
		left2=0;
	};
	if(judgeLeftLegal(s,x3)){
		left3=(x3-s)/v;
	}else{
		left3=0;
	};
	if(judgeRightLegal(t,x1)){
		right1=(t-x1)/v;
	}else{
		right1=0;
	};
	if(judgeRightLegal(t,x2)){
		right2=(t-x2)/v;
	}else{
		right2=0;
	};
	if(judgeRightLegal(t,x3)){
		right3=(t-x3)/v;
	}else{
		right3=0;
	};
	left=left1>left2?(left1>left3?left1:left3):(left2>left3?left2:left3);
	right=right1>right2?(right1>right3?right1:right3):(right2>right3?right2:right3);
	res=left<right?right:left;
	printf("%.1f\n",res);
	return 0;
}
