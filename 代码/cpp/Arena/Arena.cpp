//¾­µä³¬Ê±°æ±¾
#include <stdio.h>
#include <string.h>
int cnt[600005];
int gcd(int a, int b)
{
	return (b == 0 ? a : gcd(b, a % b));
}
int bigger(int a,int b){
	return a>b?a:b;
}

int main(){
	int amo;
	int maxBlood;
	int luckyNum;
	int sum;
	scanf("%d",&amo);
	for(int i=0;i<amo;i++){
		memset(cnt,0,sizeof(cnt));
		sum=0;
		scanf("%d%d",&maxBlood,&luckyNum);
//		cnt[1]+=maxBlood;
		for(int i=1;i<=maxBlood;i++){
			for(int j=i;j<=maxBlood;j++){
				cnt[gcd(i,j)]++;
//				printf("(%d,%d):%d\n",i,j,gcd(i,j));
			}
		}
//		for(int i=0;i<maxBlood;i++){
//			printf("%d:%d\n",i,cnt[i]);
//		}
		for(int i=2;i<luckyNum/2+1;i++){
			if(luckyNum%i!=0){
				sum+=cnt[i];
			}
		}
		for(int i=luckyNum/2+1;i<bigger(maxBlood,luckyNum);i++){		
			sum+=cnt[i];
		}
//		printf("%d\n",sum);
		printf("%d\n",(1+maxBlood)*maxBlood/2-sum);
	}
		return 0;
}
