#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float x,y;
	scanf("£¨%f,%f£©",&x,&y);
	int height=0;
	float result1,result2,result3,result4;
	result1=(x-2)*(x-2)+(y-2)*(y-2);
	result2=(x+2)*(x+2)+(y-2)*(y-2);
	result3=(x-2)*(x-2)+(y+2)*(y+2);
	result4=(x+2)*(x+2)+(y+2)*(y+2);
	if(result1>=0&&result1<=1) height=10;
	if(result2>=0&&result2<=1) height=10;
	if(result3>=0&&result3<=1) height=10;
	if(result4>=0&&result4<=1) height=10;
	printf("The height is %d m.\n",height);
	return 0;
}
