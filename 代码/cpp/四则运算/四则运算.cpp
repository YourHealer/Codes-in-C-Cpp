#include <stdio.h>
int BiggestFactor(int a,int b){
	int min=a<b?a:b;
	for(int i=min;i>0;i--){
		if((a%i==0)&&(b%i==0)){
			return i;
		}
	}
	return 1;
}
int main(){
	int a,b,c,d;
	char s,sign1,sign2,sign3,sign4;
	int ans1,ans2,an1,an2;
	scanf("%d%c%d%c%c%c%d%c%d",&a,&sign1,&b,&sign2,&s,&sign3,&c,&sign4,&d);
	if(s=='+'){
		ans1=a*d+b*c;
		ans2=b*d;
	}else if(s=='-'){
		ans1=a*d-b*c;
		ans2=b*d;
	}else if(s=='*'){
		ans1=a*c;
		ans2=b*d;
	}else{
		ans1=a*d;
		ans2=b*c;
	}
//	printf("%d%d\n",ans1,ans2);
	an1=ans1/BiggestFactor(ans1,ans2);
	an2=ans2/BiggestFactor(ans1,ans2);
//	printf("%d%d\n",ans1,ans2);
	if((an1==0)||(an2==1)){
		printf("%d%c%d%c%c%c%d%c%d = %d\n",a,sign1,b,sign2,s,sign3,c,sign4,d,an1);
	}else {
		printf("%d%c%d%c%c%c%d%c%d = %d/%d\n",a,sign1,b,sign2,s,sign3,c,sign4,d,an1,an2);
	}
	return 0;
}
