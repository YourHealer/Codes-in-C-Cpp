#include <stdio.h>
int main(){
	int head,feet;
	scanf("%d%d",&head,&feet);
	printf("%d %d\n",head-(feet-head*2)/2,(feet-head*2)/2);
	return 0;
}
