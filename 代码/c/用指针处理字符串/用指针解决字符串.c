#include <stdio.h>
#include <stdlib.h>

int main() 
{
	char* pointer_char="I am a good boy.\n";              /*进行了初始化，将该已定义的指针指向该字符串的首字符的地址。*/ 
	puts(pointer_char); 
	return 0;
}

/*
不可以用这样的方式：
char* pointer_char;                  定义了一个指向字符变量的指针，但是没有初始化，就不知道指向哪里，因此不可以用gets操作。 
gets(pointer_char);
puts(pointer_char); 
*/
