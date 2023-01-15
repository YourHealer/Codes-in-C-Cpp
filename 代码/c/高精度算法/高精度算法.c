#include<stdio.h>
#include<string.h>

char s[1000000];
int a[1000000];
b[1000000];
int len,lenb;
int d,yu;
 
/*-------------高精度除法（低）--------------*/ 
void chu_di()       //高精除低精 
{
 int yu=0;
 memset(a,0,sizeof(a));    //清空数组a 
 memset(b,0,sizeof(b));
 len=strlen(s);            //s的长度 
 for(int i=0;i<=len-1;i++)
  a[i+1]=s[i]-'0';
 for(int ii=1;ii<=len;ii++)
 {
  b[ii]=(yu*10+a[ii])/d;
  yu=(yu*10+a[ii])%d;
 }
 int lenb=1;
 while(b[lenb]==0&&lenb<len)
  lenb++;
 printf("结果：\n");
 printf("%s ÷ %d = ",s,d);
 for(int j=lenb;j<=len;j++)
  printf("%d",b[j]);
 if(yu!=0)
  printf("......%d",yu);
 printf("\n");       
}                               //高精度除法（高）你懂了吗

int main()
{
    print();
 while (scanf("%s%d",s,&d)!=EOF)
 {
        chu_di();    //引用高精度除法函数
 }
 return 0;
}