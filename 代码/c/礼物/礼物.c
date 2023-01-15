#include<stdio.h>
#include<string.h>
#include<stdbool.h>//引入布尔型 
#include<limits.h>//引入极限 
#define XLEN 200010//待选串 
#define WORDLEN 10010//欲选串 

// freopen("input.txt", "r", stdin); //0 测试重定向

char x[XLEN]; //x储存待筛选字符串

bool used[XLEN];//used用来记录字符是否已经被使用过

char words[WORDLEN * 2]; //words开两倍，为了放两倍

int next[XLEN][26];//next是灵魂，子序列自动机，开的是int型 ，方便输出位置 

int ans[WORDLEN]; //ans储存最优解 

int temp[WORDLEN]; //temp是普通解

int i,j,k; //ijk用来计数循环

int main(void)
{
 int len_x, len_word;//定义字符串长度 
 
 len_word = strlen(words);//求长 
 len_x = strlen(x);//求长
 
 memset(next, -1, sizeof(next)); //均初始化为-1 ,便于从后遍历赋值时，明确后边均无该字母 
 
 scanf("%s%s", x, words);//输入 
 

  
 for (i=0; i<len_word; i++)
  ans[i] = INT_MAX; //初始化字典序，用最大字典序， 必定可以在第一次比较时换掉 
  
 strncat(words, words, 2*WORDLEN-len_word-1); //以双倍链代环
 
 //构造序列自动机 next[i][j]=k 表示当前遍历操作中处于i位置上的下一个最近j字母的所在位置为k 

 //i从strlen-1到0遍历，
 
 //数组开大，所以不会越界，都是初始化值 

 
 for (i=len_x-1; i>=0;i--) 
 {
  for (j=0; j<26; j++) 
  {
  		next[i][j] = next[i+1][j];
  }
   
   
  	next[i][x[i] - 'a'] = i;
 }
 
 //对所有环做遍历
 for (i = 0; i < len_word; i++)
 {
 	//对每个环的情况进行恢复初始设定
	  
  int node = 0; //对一个环的情况，从头遍历到尾部
  int k = 0;//k用来辅助存放位置
  bool isloop = true; //每次假设可以成环
  bool isbetter = true; //假设每次都是更优解
  memset(used, 0, sizeof used); //每次都要刷新使用情况
  
  
  	for (j = 0; j < len_word; j++)
  	{
   		if (used[node]) //修正保留当前位置带来的影响
   		{
   		node++;
		} 
		
   		node = next[node][words[i + j] - 'a'];
  		temp[k++] = node + 1;//+1就存放了实际位置
   		used[node] = true;
   		
  		 if (node == -1) //后面没有了
   		{
   		 isloop = false;//不能成环 
    	 break;
  		}
   
  }
  
 	 if (isloop) //成功走完一圈,temp已经装好，计算最优解
  	{
   //比较字典序，因为用的INT_MAX,第一次比较必定成功
   		for (k = 0; k < len_word; k++)
   		{  
    		if (temp[k] > ans[k])
   		    {
     		isbetter = false;
     		break;
    		}
    		else if (temp[k] < ans[k])
    			{	
				break;
		    	}
   		
  		}
 
   //必须加提前退出机制，否则就比如 temp 2 5 9 10和  ans 2 6 8 9
   //虽然没有提前退出，导致9>8反而判定字典序小
   //这个问题是基础不牢，比较字典序应该是基本功，分成三种情况
   //一个大于另一个就直接判断出来，相等才进行下一步
   //而不是把另外两种情况轻率的合并
   			if (isbetter)
			{//是更优解则写入ans
    			for (k = 0; k < len_word; k++)
   				 { 
	 				ans[k] = temp[k];
				 }
			}
    }
 }
// printf("最优解:"); //3 测试
 for (i = 0; i < len_word; i++)//本来想用k的，毕竟k含义就是存位置的，但是k被释放了
  printf("%d%c",ans[i],i==len_word-1?'\n':' ');
 
 return 0;
}


