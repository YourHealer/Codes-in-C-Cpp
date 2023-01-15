#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
    float benefit;
    float welfare;
    printf("请输入您的利润：\n"); 
	scanf("%f",&benefit); 
	if(benefit<=100000)
	{
		welfare=0.1*benefit;
	}
	
	if(benefit>100000&&benefit<=200000)
	{
		welfare=10000+0.075*(benefit-100000);
	}
	
	if(benefit>200000&&benefit<=400000)
	{
		welfare=10000+7500+0.05*(benefit-200000);
	}
	
	if(benefit>400000&&benefit<=600000)
	{
		welfare=10000+7500+10000+0.03*(benefit-400000);
	}
	
	if(benefit>600000&&benefit<=1000000)
	{
		welfare=10000+7500+10000+6000+0.015*(benefit-600000);
	}
	
	if(benefit>1000000)
	{
		welfare=10000+7500+10000+6000+6000+0.01*(benefit-1000000);
	}
	
	printf("您最终获得的奖金为：%.0f元。\n",welfare);
	return 0;
}
