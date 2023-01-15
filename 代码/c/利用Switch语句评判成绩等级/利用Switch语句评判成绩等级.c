#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*现发现Switch语句不方便，改成if*/ 
int main(int argc, char *argv[]) {
	int grade;
	scanf("%d",&grade);
	if(grade<0||grade>100) 
	{
		printf("what you input doesn't exist!\n");
	}
	else
	{
		if(grade>=90) printf("A");
		if(grade>=80&&grade<=89) printf("B");
		if(grade>=70&&grade<=79) printf("C");
		if(grade>=60&&grade<=69) printf("D");
		if(grade<60) printf("E");
	}
	return 0;
}
