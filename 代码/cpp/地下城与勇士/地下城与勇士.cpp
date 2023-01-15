#include <iostream>
#include <cstdio>
#include <cstring>
#include <queue>
#include <algorithm>
#define capa 110
#define dis 55

using namespace std;

const int dir[4][2]={1,0,-1,0,0,1,0,-1};	//定义方向数组

struct pos
{
	int x;
	int y;
	int z;
	int step;								//定义结构体，包含地图上的x，y位置及时间量，到该位置的历经步骤
};

queue <pos> q;								//定义队列
char mapp[capa][capa];						//定义地图
bool vis[capa][capa][dis];					//定义抵达变量
int n,m,k,T;								//定义行数，列数，怪物消失间隔
int res;									//定义结果变量								
int sta_x,sta_y;							//入口的x，y坐标
int end_x,end_y;							//出口的x，y坐标
bool finish;								//判断是否到达终点
pos beginn;	
pos curr;
pos nxt;
					
int main() 
{
	scanf("%d",&T);							//用例数

	
	for(int i=0;i<T;i++)
	{
		sta_x=0,sta_y=0;							
		end_x=0,end_y=0;
		
		scanf("%d%d%d",&n,&m,&k);				//行、列、消失间隔
							  
		memset(mapp,0,sizeof(mapp));			//初始化
		memset(vis,0,sizeof(vis));	
		for(int j=0;j<n;j++)					//输入地图
		{
			scanf("%s",mapp[j]);
			for(int u=0;u<m;u++)
			{
				
				if(mapp[j][u]=='S')
				{
					sta_x=j;
					sta_y=u;
					beginn.x=sta_x;
					beginn.y=sta_y;
				}
				if(mapp[j][u]=='E')
				{
					end_x=j;
					end_y=u;
				}
			}
		}		

		finish=false;						//初始化为没有找到出口

		q.push(beginn);						//初始化起始变量,并压入队列
		vis[beginn.x][beginn.y][beginn.z]=1;//标记起始位置经历过
		
		while(q.size()!=0)
		{
			curr=q.front();					//记顶
			q.pop();						//弹顶
			
			if((curr.x==end_x)&&(curr.y==end_y))	//找到出口
			{
				res=curr.step;
				finish=true;
				break;
			}
			
			
				for(int j=0;j<4;j++)
				{
					
					nxt.x=curr.x+dir[j][0];
					nxt.y=curr.y+dir[j][1];
					nxt.z=curr.z+1;
					nxt.step=curr.step+1;
					
					//有怪出没
					if((curr.z+1)%k)
					{
						if(nxt.x<0||nxt.x>(n-1)||nxt.y<0||nxt.y>(m-1)||mapp[nxt.x][nxt.y]=='#'||mapp[nxt.x][nxt.y]=='*'||vis[nxt.x][nxt.y][(nxt.z)%k]==1)
						{
						continue;				
						}
					}
					//无怪出没
					else if(nxt.x<0||nxt.x>(n-1)||nxt.y<0||nxt.y>(m-1)||mapp[nxt.x][nxt.y]=='#'||vis[nxt.x][nxt.y][(nxt.z)%k]==1)
						{
							continue;
						}
						
					vis[nxt.x][nxt.y][(nxt.z)%k]=1;
					q.push(nxt);
	
				}
			
		}	
		//找到出口
			if(finish)
			{
				printf("%d\n",res);
			}
		//没找到出口
			else
			{
				printf("%d\n",-1);
			}
			
			while(q.size()!=0)
			{
				q.pop();
			}								//清空队列
		
	}
	return 0;
}
