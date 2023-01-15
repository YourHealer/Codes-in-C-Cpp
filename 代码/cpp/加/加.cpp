//小程序版
#include<stdio.h>
#include<string.h>



int jia(char* s,char* ss,int* a,int* b)     //自定义函数"jia"(名字low了一点（好像不是一点，但容易理解不是吗）) 
{	
	int len;
	int ans;
	int l1 = strlen(s);     //"strlen"是一个计算字符串长度的函数 
	int l2 = strlen(ss);    //将输入的两个字符串的长度赋值给l1,l2
	if (l1 > l2) 
		len = l1;      //将len赋值为l1,l2中大的那个 
	else 
		len = l2;
	//		for (int i = 0 ; i <= len ; i++)  //清零（这里for循环和下面三句memset都为将字符串清零 ） 
	//			a[i] = b[i] = c[i] = 0;
	memset(a,0,sizeof(a));    //清零too(只能清零，不能干别的) 
	memset(b,0,sizeof(b));    //这是清零函数（字符串） 
	//两个for循环是将输入的两个字符串倒过来
	for (int i = l1 - 1 ; i >= 0 ; i--)    //再将字符串里的字符转换为数字赋值给a,b整型数组 
		a[l1 - i - 1] = s[i] - '0';        //但为什么大数要用字符串存呢？
	for (int i = l2 - 1 ; i >= 0 ; i--)    //因为大数太大，用任何整型变量都存不下 
		b[l2 - i - 1] = ss[i] - '0';       //为什么要把字符串倒过来赋值呢？ 
	//因为大数与大数是一位一位运算的，还要涉及进位等 
	for (int i = 0 ; i < len ; i++)
	{
		a[i] = a[i] + b[i];    //运算 
		a[i+1]+= a[i] / 10;    //如有进位，在后一位上加上 
		a[i] = a[i] % 10;      //原来那一位减掉进位了的 
	}
	if (a[len] != 0) len++;    //如果有进位就多显示一位（这句话很重要） 
	
	while (a[len - 1] == 0 && len>1) len--;		//我叫它while去零法
	ans=0;
	for (int i = len - 1 ;i >= 0 ;i--){
		printf("%d",a[i]);//输出结果 
		b[ans++]=a[i];
	} 
	printf("\n");
	return ans;
}                              //高精度加法你懂了吗？

int main()
{
	char s[1000],ss[1000];
	int a[1000],b[1000];
	int length;
	scanf("%s",s);
	scanf("%s",ss);
	length=jia(s,ss,a,b);
	for(int i=0;i<length;i++){
		printf("%d",b[i]);
	}

	return 0;
}


