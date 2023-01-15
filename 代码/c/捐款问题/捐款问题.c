#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	float amount=0;
	float total,average;
	int i;
	for(i=0;total<100000;i++) 
	{
		printf("大爱无疆，捐款助力！您的一次捐助将是被捐赠者永久的温暖！您的捐款数值为：\n");
		scanf("%f",&amount);
		total=total+amount;
	}
	num=i;
	average=total/num;
	printf("\n爱让世界串联。\n本次所得捐款总额为：%.2f.\n捐款人数达：%d。\n人均捐款额为：%.2f。\n",total,num,average);
	return 0;
}
