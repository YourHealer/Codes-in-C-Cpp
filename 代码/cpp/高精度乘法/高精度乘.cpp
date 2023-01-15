#include <stdio.h>
#include <string.h>
char s[10000],ss[10000];
int arr[10000];
int cheng_gao(char* s,char* ss,int* d)     //高是指高精度乘高精度 
{
	int len,lenn;
	int a[10000],b[10000],c[10000];
	len = strlen(s);
	lenn = strlen(ss);
	memset(a,0,sizeof(a));   //清零数组
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));	
	for (int i = 0 ; i < len ; i++)
		a[len - i - 1] = s[i] - '0';    //将字符串转化为数组 
	for (int i = 0 ; i < lenn ; i++)
		b[lenn - i - 1] = ss[i] - '0';
	
	memset(c,0,sizeof(c));   //清零 
	for (int i = 0 ; i < len ; i++)
		for (int j = 0 ; j < lenn ; j++)
			c[i + j] += a[i] * b[j];       //运算（这个就有一点复杂了） 
	
	int l = len + lenn - 1;    //l是结果的最高位数 
	for (int i = 0 ; i < l ;i++)
	{
		c[i + 1] += c[i] / 10;    //保证每一位的数都只有一位，并进位 
		c[i] %= 10;
	}
	if (c[l] > 0) l++;     //保证最高位数是对的 
	while (c[l - 1] >= 10)
	{
		c[l] = c[l - 1] / 10;
		c[l - 1] %= 10;
		l++;
	}
	while (c[l - 1] == 0 && l > 1) 
		l--;    //while去零法 
	memcpy(d,c,sizeof(c));
	return l;
}                               


int main()
{
	int len;
	scanf("%s",s);
	scanf("%s",ss);
	len=cheng_gao(s,ss,arr);
	for(int i=len-1;i>=0;i--){
		printf("%d",arr[i]);
	}
	return 0;
}


