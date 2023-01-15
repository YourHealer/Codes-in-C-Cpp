#include <stdio.h>
int main(){
	int num;
	int cnt=1;
	int res=0;
	scanf("%d",&num);
	while(res<num){
		res+=cnt;
		cnt++;
	}
	printf("%d\n",cnt-1);
	return 0;
}
