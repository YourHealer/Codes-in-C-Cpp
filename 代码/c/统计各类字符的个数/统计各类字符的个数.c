#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char ch[30];
	gets(ch);
	int length;
	int i; 
	int counter1=0;
	int counter2=0;
	int counter3=0;
	int counter4=0;
	length=strlen(ch);
	for(i=0;i<length;i++)
	{
		if( ((ch[i]>='A')&&(ch[i]<='Z'))||((ch[i]>='a')&&(ch[i]<='z')) )
		{
			counter1++;
		}
		else if((ch[i]>='0')&&(ch[i]<='9'))
		     {
		     	counter2++;
			 }
			 else if(ch[i]=' ')
			      {
			      	counter3++;
				  }
				  else counter4++;
	 } 
	 printf("字母个数为：%d,数字个数为：%d,空格个数为：%d,其他字符个数为：%d。\n",counter1,counter2,counter3,counter4);
	return 0;
}
