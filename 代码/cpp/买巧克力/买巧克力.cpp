#include "stdio.h"

//int get_cnt(int que){
//	int x,y,z;
//	int cnt=0;
//	int sum=0;
//	for(x=que/3;x>=0;x--)
//		for(y=que/2;y>=0;y--)
//			for(z=que;z>=0;z--){
//				sum=3*x+2*y+z;
//				if(sum<que){
//					break;
//				}else if(sum==que){
//					cnt++;
//				}
//			}
//	return cnt;
//}

long Work(long n)
{
	long k = n/3;
	long ans = (n+2)*(k+1) - 3*k*(k+1)/2;
	if(k%2!=0 && ans%2==0)
		ans -= k/2+1;
	else
		ans -= k/2;
	return ans/2;
}

int main()
{
	long que1,que2;
	scanf("%ld%ld",&que1,&que2);
	long cnt1=0;
	long cnt2=0;
	long sum=0;
	for(int i=0;i<=1;i++){
		for(int j=0;j<=2;j++){
			for(int k=0;k<=3;k++){
				sum=i+j+k;
				if(que1>=sum){
					cnt1+=Work(que1-sum);
				}
				if(que2>=sum){
					cnt2+=Work(que2-sum);
				}
			}
		}
	}
	printf("%ld %ld\n",cnt1,cnt2);
}
