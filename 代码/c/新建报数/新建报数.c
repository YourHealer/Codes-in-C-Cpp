#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#include <math.h>  
  
//初始报数值   
int x;   
  
//所站位置   
char pos_1[1005];  
int pos_2[1005];  
  
//非循环节长度的十进制整数数组  
int non[3];   
  
//获取读入的字符   
char c;  
   
//循环变量  
int i,j,k,t;  
  
//拷贝j  
int j_copy;   
  
//站位字符数组长度  
int length_n=0;  
int length_dividend=0;   
  
//记录后三位的数组  
int array[1000];  
  
//取临时数  
int temp=0;  
  
//定义循环节长度   
int dividend=0;  
int divisor=0;  
  
//定义标志变量  
int flag=0;  
  
//定义模   
int mod;  
  
int u;  
int n=0;  
  
int main()   
{  
          
//初始化数组   
    memset(array,0,sizeof(array));  
    memset(pos_1,0,sizeof(pos_1));  
    memset(pos_2,0,sizeof(pos_2));  
      
//输入所报数与站位  
    scanf("%d",&x);  
      
//吸收回车符   
    getchar();  
      
//将站位值看作字符数组输入，一位位读取，并对位数进行计算   
    for(i=0;(c=getchar())!='\n';i++)  
    {  
        pos_1[i]=c;  
        length_n++;  
    }  
  
    array[0]=x;  
      
//循环节最多1000种可能   
    for(i=0;i<1000;i++)  
    {  
        // 进行取后三位运算   
        temp=x*array[i];  
        if((temp>=0)&&(temp<1000))  
        {  
            array[i+1]=temp;  
        }  
        else if(temp>=1000)    
            {  
                array[i+1]=temp%1000;  
            }  
              
        //判断所报数是否重复，如果重复就结束循环   
        for(j=0;j<i+1;j++)  
        {  
            if(array[i+1]==array[j])  
            {  
                flag=1;  
                break;      
            }  
        }  
          
        if(flag==1)  
        {  
            break;  
        }  
    }  
      
    //确定被除数，即循环节长度   
    dividend=i+1-j;  
      
    //进行高精度减法运算，确定除数  
  
    //将非循环节长度转化为三位数的整数数组存储  
        j_copy=j;     
      
        if((j_copy>=1)&&(j_copy<10))  
        {  
            non[0]=j_copy;  
            non[1]=0;  
            non[2]=0;   
        }   
          
        if((j_copy>=10)&&(j_copy<100))  
        {  
            non[0]=j_copy%10;  
            non[1]=j_copy/10;  
            non[2]=0;  
        }  
      
        if((j_copy>=100)&&(j_copy<1000))  
        {  
            non[0]=j_copy%10;  
            non[1]=(j_copy/10)%10;  
            non[2]=(j_copy/10)/10;  
        }  
          
        //将站位的字符数组倒序替换为整数数组  
        for(t=0;t<length_n;t++)  
        {  
            pos_2[t]=pos_1[length_n-1-t]-'0';  
        }  
          
        //两数组进行减法运算   
        for(k=0;k<length_n;k++)  
        {  
            pos_2[k]=pos_2[k]-non[k];  
                if(pos_2[k]<0)  
                {  
                    pos_2[k+1]-=1;  
                    pos_2[k]+=10;   
                }  
        }   
          
  
          
        //根据循环节长度确定除法方式，求出每次除法的长度   
        if((dividend>=1)&&(dividend<10))  
        {  
            length_dividend=1;  
        }  
        else if((dividend>=10)&&(dividend<100))  
        {  
            length_dividend=2;  
        }  
            else if((dividend>=100)&&(dividend<1000))  
                {  
                    length_dividend=3;  
                }  
    
     
        //确定初始除数   
        for(k=0;k<length_dividend;k++)  
        {  
            divisor=divisor+pow(10,length_dividend-k-1)*(pos_2[length_n-(k+1)]);  
        }  
   
        //获得余数   
        for(k=0;k<length_n-length_dividend+1;k++)  
        {  
            divisor=divisor%dividend;  
          
            if(k!=length_n-length_dividend)  
            {   
                divisor=10*divisor+pos_2[length_n-length_dividend-(k+1)];  
            }  
  
        }  
  
    //站位没有进入循环 但是实现不了   
      
    if(length_n==1)  
    {  
        u=pos_1[0]-48;  
    }  
    if(length_n==2)  
    {  
        u=(pos_1[0]-48)*10+(pos_1[1]-48);  
    }  
    if(length_n==3)  
    {  
        u=(pos_1[0]-48)*100+(pos_1[1]-48)*10+pos_1[2]-48;  
    }  
    if(length_n>3)  
    {  
        u=(pos_1[length_n-4]-48)*1000+(pos_1[length_n-3]-48)*100+(pos_1[length_n-2]-48)*10+(pos_1[length_n-1]-48);  
    }  
      
    for(i=length_n-1;i>=0;i--)  
    {  
        n=n+(pos_1[i]-48)*pow(10,length_n-i-1);  
    }  
        if(j>u)  
        {  
            printf("%d\n",array[n-1]);  
        }  
      
    //站位进入循环  
        else  
        {   //如果求余为0，则视为商-1，余数+length_dividend    
            if(divisor==0)  
            {  
                divisor=divisor+dividend;  
            }  
      
            printf("%d\n",array[j+divisor-1]);  
      
        }  
  
  
    return 0;  
}  
? 《千字文》正体中文版
跳至...
