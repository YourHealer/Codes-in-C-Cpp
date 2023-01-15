#include <stdio.h>
#include <stdlib.h>

long long int n,h;
long long int i;
long long int array[100005];
long long int sum;

int main() 
{
	scanf("%lld %lld",&n,&h);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&array[i]);
		getchar();
	}
	
	sum=h-array[0];
	for(i=0;i<n-1;i++)
	{
			if(array[i+1]<array[i])
		{
		sum=sum+array[i]-array[i+1];
		}
	
	}

	printf("%lld\n",sum);
	return 0;
}
