#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]) {
	char ch[20];
	gets(ch);
	char c;
	int i,length;
	length=strlen(ch);
	for(i=0;i<length;i++) 
	{
		if((ch[i]>='A')&&(ch[i]<='V'))
		{
			ch[i]=ch[i]+4;
		}
		
		if((ch[i]>='a')&&(ch[i]<='v'))
		{
			ch[i]=ch[i]+4;
		}
		
		if((ch[i]>='X')&&(ch[i]<='Z'))
		{
			ch[i]=ch[i]-22;
		}
		
		if((ch[i]>='x')&&(ch[i]<='z'))
		{
			ch[i]=ch[i]-22;
		}
	}
	for(i=0;i<length;i++)
	{
		printf("%c",ch[i]);
	}
	return 0;
}
