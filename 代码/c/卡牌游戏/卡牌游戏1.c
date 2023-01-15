#include <stdio.h>
#include <string.h>
int p=0,max=0;
long long int n=0,k=0,i=0,t=0;
int n1[200005],n2[200005],temp[200005];
int main()
{

scanf("%d",&n);
for(i=1;i<=n;i++) scanf("%d",&n1[i]);
for(i=1;i<=n;i++) scanf("%d",&n2[i]);

for(i=1;i<=n;i++)
{
if(n2[i]!=0) temp[i]=i-n2[i]+1;
if(temp[i]>max) max=temp[i];
}
//1在牌堆


for(i=1;n2[i]!=1;i++);
if(i!=n+1)
{k=1;

for(;n2[i+1]==n2[i]+1;i++)k++;
if(i==n)//最后连续
{

for(i=1;i<=n-k;i++)if(i>n2[i]-1-k&&n2[i]!=0)p=1;
if(p==0)printf("%d\n",n-k);
if(p==1)printf("%d\n",n+max);
}
else{
printf("%d\n",n+max);}
}else printf("%d\n",n+max);

return 0;
}
