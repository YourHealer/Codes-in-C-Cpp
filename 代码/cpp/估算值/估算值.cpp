#include <stdio.h>
#include <math.h>
#define LIMIT (pow(10,-8))           /*定义余项极限值*/ 

int main()
{
  int n;                             /*定义循环变量*/
  float num;                        /*定义加数*/ 
  float total=0;                    /*定义和*/ 
  float k=1;                        /*定义加数的绝对值，并对其赋值1，使其可以进入下面的循环*/                  
  for(n=0;k>=LIMIT;n++)	
  {
	num=pow(-1,n)*(1.0/(2*n+1));     /*循环主体，各加数的规律为：pow(-1,n)*(1.0/(2*n+1))，当加数绝对值大于余项极限值时进行循环。*/ 
	k=fabs(num);                     /*对单/双精度变量求绝对值是fabs（），对整数求是abs（），无语子，在这里浪费了好多时间！！！！气死我惹！*/ 
	total=total+num;
  }
  float plus;                        /*利用这种方法会使得多加余项这一项，故减去。*/ 
  plus=pow(-1,(n-1))*(1.0/(2*n-1));
  printf("%f\n",total-plus);
  printf("运算次数为：%d.\n",n-1); /*当余项值为10^(-8)，运算次数为近5千万次；当余项值为10^(-6)，运算次数为近5十万次；*/

}
