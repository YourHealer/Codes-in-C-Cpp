#include <stdio.h>
int LCW(int m,int n){
	int temp;
	int i;
	if(m<n)  /*比较大小，使得m中存储大数，n中存储小数*/
	{
		temp = m;
		m = n;
		n = temp;
	}
	for(i=m; i>0; i++)
	{
		if(i%m==0 && i%n==0)
		{
			return i;
		}		
	}
}

int main(){
	int k,a,b;
	int first,second,third,fourth;
	int res;
	scanf("%d%d%d",&k,&a,&b);
	if(k==1){
		first=2;
	}
	else{
		first=3;
	}
	second=(24*30/a)%10;
	third=1;
	res=LCW(463,b);
	fourth=(res/10)%10;
	printf("%d%d%d%d\n",first,second,third,fourth);
	return 0;
}
