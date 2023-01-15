#include <stdio.h>
#include <math.h>
#include <string.h>
void getBinaryValue(int a,int* arr){
	int num=a;
	for(int i=7;i>=0;i--){
		if(num>=pow(2,i)){
			arr[i]=1;
			num-=pow(2,i);
		}
	}
}
int main(){
	int sum;
	char c1,c2;
	int ch1,ch2;
	scanf("%c%c",&c1,&c2);
	ch1=c1,ch2=c2;
	int arr1[8],arr2[8],arr3[8];
	memset(arr1,0,sizeof(arr1));
	memset(arr2,0,sizeof(arr1));
	memset(arr3,0,sizeof(arr1));
	getBinaryValue(ch1,arr1);
	getBinaryValue(ch2,arr2);
//	for(int i=0;i<=7;i++){
//		printf("%d ",arr1[i]);
//	}
//	printf("\n");
//	for(int i=0;i<=7;i++){
//		printf("%d ",arr2[i]);
//	}
//	printf("\n");
	for(int i=0;i<=7;i++){
		if(i>=4){
			arr3[i]=arr2[i]&arr1[i];
		}else{
			arr3[i]=(arr2[i]!=arr1[i]?1:0);
		}
//		printf("%d ",arr3[i]);
	}
//	printf("\n");
	for(int i=0;i<=7;i++){
		sum+=(arr3[i]*pow(2,i));
	}
	printf("%c\n",sum);
	return 0;
}
