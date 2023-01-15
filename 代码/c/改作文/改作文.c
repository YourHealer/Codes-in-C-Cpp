#include <stdio.h>  
#include <stdlib.h>  
  
char com[1000005];   
int i=0;  
int j=0;  
char check(int pos);  
  
int main()   
{  
    //进行输入   
    while(~scanf("%c",&com[i]))  
    {  
        i++;  
    }  
      
    //进行修改核验   
    for(j=0;j<i;j++)  
    {  
        printf("%c",check(j));  
    }  
      
    return 0;  
}  
  
char check(int pos)  
{  
    //小写字母   
    if(97<=com[pos]&&com[pos]<=122)  
    {     
        //上一个是换行符 或 上一个是空格 上上一个是句点/问号/感叹号   
        if((pos==0)||(com[pos-1]=='\n')||((com[pos-1]==' ')&&((com[pos-2]==33)||(com[pos-2]==46)||(com[pos-2]==63))))  
        {  
            com[pos]=com[pos]-32;  
        }  
    }  
      
    //非小写字母   
    else  
    {   //大写字母   
        if(65<=com[pos]&&com[pos]<=90)  
        {  
            if((pos==0)||(com[pos-1]=='\n')||((com[pos-1]==' ')&&((com[pos-2]==33)||(com[pos-2]==46)||(com[pos-2]==63))))  
            {  
              
            }  
            else  
            {  
                com[pos]=com[pos]+32;  
            }  
        }  
    }   
      
    return(com[pos]);  
      
}
