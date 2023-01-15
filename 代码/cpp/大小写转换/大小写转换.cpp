#include <stdio.h>
#include <math.h>
int main(){
	char x;
	scanf("%c",&x);
	if((65<=x)&&(90>=x)){
		printf("%c\n",x+32);
	}else if((97<=x)&&(122>=x)){
		printf("%c\n",x-32);
	}else{
		printf("%c\n",x);
	}
	return 0;
}
