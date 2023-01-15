#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char s1[10]={'0'};
	char s2[10]={'0'};
	
	gets(s1);
	gets(s2);
	
	int result=0;
	int i; 
	int flag;
	
	for(i=0;i<10;i++)
	{
		if(s1[i]==s2[i])
		{
			flag=0;
		}
		
		if(s1[i]<s2[i])
		{
			flag=1;
			result=s1[i]-s2[i];
			break;
		}
		
		if(s1[i]>s2[i])
		{
			flag=1;
			result=s1[i]-s2[i];
			break;
		}
	}
	
	
	if(flag==0)
	{
	printf("0");
	}
	
	if(flag==1)
	{
	printf("%d",result);	
	}
	
	
	return 0;
}
