#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

int n;							//¡– ˝
long long rec1;
long long max;
long long sum=0;
long long aver;

int main() 
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld",&rec1);
		sum+=rec1;
		aver=sum/i;
		if(aver>max)
		{
			max=aver;
		}
	}							// ‰»Î
	
	printf("%lld\n",max);
	
	return 0;
}
