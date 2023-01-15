#include <stdio.h>
int main(){
	int money_total,amount_total,apple_price,pear_price;
	int apple_amount,pear_amount;
	
	scanf("%d%d%d%d",&money_total,&amount_total,&apple_price,&pear_price);
	if(apple_price>pear_price){
		pear_amount=(apple_price*amount_total-money_total)/(apple_price-pear_price);
		apple_amount=amount_total-pear_amount;
	}
	else{
		apple_amount=(pear_price*amount_total-money_total)/(pear_price-apple_price);
		pear_amount=amount_total-apple_amount;
	}
	printf("%d %d\n",apple_amount,pear_amount);
	return 0;
}
