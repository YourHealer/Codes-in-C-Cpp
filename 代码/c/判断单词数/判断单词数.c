#include <stdio.h>
#include <stdlib.h>

int main()
 {
	int flag=0,count=0;           /*定义标志变量flag，若flag=0，则还没有开始新单词。若开始了新单词，令flag=1，表明是新单词。定义计数变量count，当开始新单词就加一。*/
	char string[20];              /*定义数组用以储存输入的字符串。*/ 
	gets(string);                 /*利用gets函数读取输入的字符串（可以包括空格）要注意不是puts！！！*/ 
	char c;
	int i; 
	for(i=0;(c=string[i])!='\0';i++)   /*借助循环判断是否到了字符串末尾*/ 
	{
		if(c==' ')                     /*如果是空格，说明是上一个字符结束了，将标志变量变为0，方便统计下一个单词*/ 
		{
			flag=0;
		}
		
		else if(flag==0)                /*如果不是空格，且标志变量为0，说明刚结束一个单词，开始了新的单词，计数变量加一，标志变量变为1*/ 
		{                               /*如果不是空格，且标志变量为1，说明还在延续新的单词。*/ 
			flag=1;
			count++;
		}
	}
	printf("There are %d words in the line.\n",count);     /*其实核心在于能否得知前一个是空格。可以用string[i-1],但是不如标志变量方便。*/ 
	return 0;
}
