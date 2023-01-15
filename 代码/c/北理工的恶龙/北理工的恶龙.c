#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//定义龙的结构体类型，包含其难度及经验值 
typedef struct dragon
{
	int com;
	int exp;
 } Dragon;

//定义结构体数组储存龙的信息 
	Dragon arr_plus[200010];
	Dragon arr_minus[200010];
	
//定义龙的数量 
	int num;
	int n_plus=0;
	int n_minus=0; 
	
//定义循环变量
    int i;	
    
//定义要花的钱
	long long int money=0;
	 
//定义玩家攻击力
	long long int power=0; 
	
//定义接收变量 
	int rec1=0;
	int rec2=0;

//定义快排函数中的比较函数	 
int compare1(const void* a,const void* b)
{
	Dragon* pa=(Dragon*)a;
	Dragon* pb=(Dragon*)b;
	return((pa->com)-(pb->com));
}

int compare2(const void* a,const void* b)
{
	Dragon* pa=(Dragon*)a;
	Dragon* pb=(Dragon*)b;
	return (((pb->com)+(pb->exp))-((pa->com)+(pa->exp)));
}
    
int main()
{
	//数组初始化 
	memset(arr_plus,0,sizeof(arr_plus));
	memset(arr_minus,0,sizeof(arr_minus));
	
	//输入 
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		//接受难度值与经验值 
		scanf("%d",&rec1);
		scanf("%d",&rec2);
		if(rec2>=0)
		{
			arr_plus[n_plus].com=rec1;
			arr_plus[n_plus].exp=rec2;
			n_plus++;
		} 
		if(rec2<0)
		{
		 	arr_minus[n_minus].com=rec1;
			arr_minus[n_minus].exp=rec2;	
			n_minus++;
		}
	} 
	
	//对经验值非负的龙按照经验值从小到大排序
	qsort(arr_plus,n_plus,sizeof(Dragon),compare1); 
	
	// 对经验值非负的龙进行遍历，能打过就打，打不过即刻氪金。
	for(i=0;i<n_plus;i++)
	{
		if(power>=arr_plus[i].com)
		{
			power+=arr_plus[i].exp;
		}
		else
		{
			money+=(arr_plus[i].com-power);
			power=arr_plus[i].com;
			power+=arr_plus[i].exp;
		}
	}
	
	//对经验值为负的龙按照（难度+经验值）从大到小排序 
	qsort(arr_minus,n_minus,sizeof(Dragon),compare2); 
	
	//对经验值为负的龙进行遍历，能打过就打，打不过即刻氪金。 
	for(i=0;i<n_minus;i++)
	{
		if(power>=arr_minus[i].com)
		{
			power+=arr_minus[i].exp;
		}
		else
		{
			money+=(arr_minus[i].com-power);
			power=arr_minus[i].com;
			power+=arr_minus[i].exp;
		}
	}
	
	//进行输出
	printf("%lld\n",money); 
	return 0;
}
