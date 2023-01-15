#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ch[30];
	gets(ch);
	printf("%s\n",ch);
	puts(ch); 
	return 0;
}
