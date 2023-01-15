#include <iostream>
#include <cstdio>
#include <cstring>
#include <stack>

using namespace std;

int n=0;					//宽度
long long arr[200010];		//建数组
long long arrtmp[200010];	//建由1和0组成的临时数组
stack <long long> hei;		//建栈

int main()
{
	while(~scanf("%d", &n))					//输入到eof
	{	
		long long max=0;						//定义并初始化最大高度		
		memset(arr, 0, sizeof(arr));			//初始化
		memset(arrtmp, 0, sizeof(arrtmp));		//初始化
		while (!hei.empty())
		{
			hei.pop();	
		}										//清空栈

		for (int i = 0; i < n; i++)
		{
			scanf("%lld", &arr[i]);
			if (arr[i] > max)
			{
				max = arr[i];
			}					
		}										//输入并找出最大值
		for (int i = 0; i < n; i++)
		{
			arrtmp[i] = (max - arr[i]) % 2;		//对临时数组赋值为0或1
				if (hei.empty())
				{
					hei.push(arrtmp[i]);
				}
				else
				{
					(arrtmp[i] == hei.top()) ? hei.pop() : hei.push(arrtmp[i]);
				}
		}										
		if(hei.size() <= 1)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	
		
	}
	
	return 0;
}
