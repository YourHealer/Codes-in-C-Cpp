#include <iostream>
#include <queue>
#include <cstdio>
#include <cstring>
#include <vector>
#define capacity 300005
using namespace std;

int res=-1;
int m;			//定义成语量
vector <int> nxt[capacity];		//储存图的容器

//定义结构体 储存成语的首字和尾字
struct Word
{
	int num;	//记录数据
	int step;	//走到这里的步数
};

bool flag[capacity];			//记录是否使用过

Word curr;
Word pre;
queue <Word> q;					//用来压入/弹出成语的队列

int main() 
{
	scanf("%d",&m);
	
	int	rec1,rec2,rec3,rec4;			//定义接收变量
	
	for(int i=0;i<m;i++)
	{
		scanf("%d%d%d%d",&rec1,&rec2,&rec3,&rec4);
		nxt[rec1].push_back(rec4);		//输入储备成语
	}
	
	int sta_b,sta_e,end_b,end_e;		//定义开始成语的首尾字和结束成语的首尾字
	
	scanf("%d%d%d%d",&sta_b,&rec1,&rec2,&sta_e);
	scanf("%d%d%d%d",&end_b,&rec3,&rec4,&end_e);	//输入开始、结束成语
							
	if((sta_b==end_b)&&(rec1==rec3)&&(rec2==rec4)&&(sta_e==end_e))
	{
		printf("%d\n",1);			//特例1 只用到一个成语
		return 0;
	}
	else if(sta_e==end_b)
		{
			printf("%d\n",2);		//特例2 只用到两个成语
			return 0;
		}
		else						//常规
		{
		curr.num=sta_e;
		curr.step=1;
		q.push(curr);
		
		while(q.size()!=0)
		{
			pre=q.front();		//取首
			flag[pre.num]=true;	//用过
			q.pop();			//弹首

			int amo=nxt[pre.num].size();
			
			for(int i=0;i<amo;i++)
				{
						curr.num=nxt[pre.num][i];
						if(flag[curr.num]) continue;
						else
						{
							curr.step=pre.step+1;
							q.push(curr);
							flag[curr.num]=true;
							if(curr.num==end_b)
							{
								res=curr.step+1;
								break;
							}
						}
				}
		if(res!=-1) break;
		}
		printf("%d\n",res);
		}
	
	return 0;
}
