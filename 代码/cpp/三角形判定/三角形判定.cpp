#include <stdio.h>
int get_max(int x,int y,int z){
	return x>y?(x>z?0:2):(y>z?1:2);
}
int main(){
	int arr[3];
	int max_index=0;
	int a,b;
	scanf("%d%d%d",&arr[0],&arr[1],&arr[2]);
	max_index=get_max(arr[0],arr[1],arr[2]);
	if(max_index==0){
		a=1,b=2;
	}else if(max_index==1){
		a=0,b=2;
	}else if(max_index==2){
		a=0,b=1;
	}
	if(arr[a]+arr[b]<=arr[max_index]){
		printf("non-triangle.\n");
	}else if((arr[a]==arr[max_index])&&(arr[b]==arr[max_index])){
		printf("equilateral triangle.\n");
	}else if((arr[a]==arr[b])&&(arr[a]!=arr[max_index])){
		printf("isoceles triangle.\n");
	}else if((arr[a]==arr[max_index])&&(arr[a]!=arr[b])){
		printf("isoceles triangle.\n");
	}else if((arr[b]==arr[max_index])&&(arr[a]!=arr[b])){
		printf("isoceles triangle.\n");
	}else{
		printf("triangle.\n");
	}
	
	return 0;
}
