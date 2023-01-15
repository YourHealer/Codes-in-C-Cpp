#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 char ch;
	 scanf("%c",&ch);
	 if((ch>='A')&&(ch<='Z'))
	 {
	 	printf("%c\n",ch);
	 }
	 else if((ch>='a')&&(ch<='z'))
	      {
	 	   printf("%c\n",ch-32);
	      }
	      else
	      {
	       	printf("what you input is error!\n");
		  }
	return 0;
}
