#include <stdio.h>
#include <math.h>
int isprime(int n){
	if((n==2)||(n==3)){
		return 1;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int num;
	scanf("%d",&num);
	for(int i=2;i<=num/2+1;i++){
		if(isprime(i)&&(isprime(num-i))){
			printf("%d=%d+%d\n",num,i,num-i);
			break;
		}
	}
	return 0;
}
