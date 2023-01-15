#include <stdio.h>
int main(){
	int a,b,c;
	int ans1,ans2;
	scanf("%d%d%d",&a,&b,&c);
	if(a<400){
		if((a+a*0.01*b)>400){
			ans1=a+(400-a)+(a*0.01*b-(400-a))*0.8;
		}else{
			ans1=a+a*0.01*b;
		}
	}else{
		ans1=a+a*0.01*b*0.8;
	}
	if(ans1<400){
		if((ans1+c)>400){
			ans2=ans1+(400-ans1)+(c-(400-ans1))*0.8;
		}else{
			ans2=ans1+c;
		}
	}else{
		ans2=ans1+c*0.8;
	}
	printf("%d\n",ans2);
	return 0;
}
