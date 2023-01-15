//代码的相似度有实在高...... 比较危险 可以考虑修改一部分内容喔 除掉位运算的核心算法，也可以在部分步骤处自己想一些其他算法~ 
 
#include<stdio.h>
#include<math.h>
#include <stdlib.h>

int num[100000];
int a[20][20],aa[20][20];

//按灯 
void re(int *q){
 if(*q==1) *q=0;
 else      *q=1; 
  
}
//修改灯的状态 
void di(int i,int j)
{
    re(&aa[i][j]);
 	re(&aa[i+1][j]);
    re(&aa[i-1][j]);
    re(&aa[i][j+1]);
    re(&aa[i][j-1]);
}




int compare(int s,int qum[]){
 int min=0;
 int i;
 for(i=0;i<s-1;i++){
   if(*(qum+min)>*(qum+i)) min=i;
 }
 return min;
}
int main()
{

 int i,j,m,n,p;
 long int s;
 int cnt,k,result;
 
 scanf("%d %d",&m,&n);
 
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
  //修改点1 你看测试用例 是一串数直接给 如果不在格式符处限制输入的整数的长度为1 你直接把一长串数当成一个数输入到一个变量里了 
   scanf("%1d",&a[i][j]);
  }
 }//输入数组
  
  s=pow(2,n);
  
  for(k=0;k<s;k++){    
  
   cnt=0; 
  
  for(i=0;i<m;i++)
  {
  for(j=0;j<n;j++)
  {
  	//修改点2 康康这里是什么 你原来写的是==，==是if的判断语句 ，改为=，我说调试的时候aa没数据 全是0 都没有赋到值 
    aa[i][j]=a[i][j];
   
  }
 }

  for(j=0;j<n;j++)
  {
    if((k>>j)&1){
    cnt++;
 //修改点3 这里是n-j-1，不是n-j+1  
    di(0,n-j-1);
     }
  }
  //第一行情况 
  //k指在第一行的操作次数 
 
  for(i=0;i<m-1;i++){
   for(j=0;j<n;j++){
    if(aa[i][j]==1){
     di(i+1,j);
     cnt++;
    }
   }
  }
 //逐行操作 
p=0;
    
 for(j=0;j<n;j++)
  if(aa[m-1][j]==1)p=1;
//修改点4 这个100000是我原先随便赋值的 足够大就好  你再另取个大数就好 
 if(p==0){num[k]=cnt;}
   else{num[k]=3000;}
 
 
 
 }

  result=compare(s,num);
   printf("%d\n",num[result]);
   
   return 0;
   
}

