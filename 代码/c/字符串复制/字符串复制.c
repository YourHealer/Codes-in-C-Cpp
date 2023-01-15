#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char s1[20];
	char s2[20];
	
	gets(s1);
	gets(s2);
	
	strcpy(s1,s2); 
	puts(s1);
	return 0;
}
