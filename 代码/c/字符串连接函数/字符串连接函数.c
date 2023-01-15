#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char array1[20];
	char array2[20];
	
	gets(array1);
	gets(array2);
	
	strcat(array1,array2);
	
	puts(array1);
	puts(array2);
	
	return 0;
}
