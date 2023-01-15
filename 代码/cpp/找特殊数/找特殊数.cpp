#include <stdio.h>
#include <math.h>
#include <string.h>
int judgeArr(int num,int n){
	int arr[7];
	int cnt=0;
	int sum=0;
	int times=0;
	int ori=num;
	while(num){
		arr[cnt++]=num%10;
		num=num/10;
		times++;
	}
	for(int i=0;i<times;i++){
		sum+=pow(arr[i],n);
	}
//	printf(" sum=%d ori=%d",sum,ori);
//	printf("\n");
	if(sum==ori){
		return 1;
	}else{
		return 0;
	}
}

int main(){
	int n;
	int cnt=0;
	scanf("%d",&n);
	for(int i=pow(10,n-1);i<pow(10,n);i++){
		if(judgeArr(i,n)){
			printf("%d\n",i);
			cnt++;
		}
	}
	if(cnt==0){
		printf("No output.\n");
	}
	return 0;
}
