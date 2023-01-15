#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#define cash 1000

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float ratio5years=0.03;
	float ratio3years=0.0275;
	float ratio2years=0.021;
	float ratio1year=0.015;
	float ratiodynamic=0.0035;
	
	printf("一次存5年的利息为：\n");
	printf("%.2f\n",cash*(5*ratio5years));
	printf("先存2年，再存3年的利息为：\n");
	printf("%.2f\n",cash*(1+2*ratio2years)*(1+3*ratio3years)-cash);
	printf("先存3年，再存2年的利息为：\n");
	printf("%.2f\n",cash*(1+3*ratio3years)*(1+2*ratio2years)-cash);
	printf("五次存1年的利息为：\n");
	printf("%.2f\n",cash*(1+ratio1year)*(1+ratio1year)*(1+ratio1year)*(1+ratio1year)*(1+ratio1year)-cash);
	printf("存活期的利息为：\n");
	printf("%.2f\n",cash*(1+0.25*ratiodynamic)*(1+0.25*ratiodynamic)*(1+0.25*ratiodynamic)*(1+0.25*ratiodynamic)*(1+0.25*ratiodynamic)*(1+0.25*ratiodynamic)*(1+0.25*ratiodynamic)*(1+0.25*ratiodynamic)*(1+0.25*ratiodynamic)*(1+0.25*ratiodynamic)*(1+0.25*ratiodynamic)*(1+0.25*ratiodynamic)*(1+0.25*ratiodynamic)*(1+0.25*ratiodynamic)*(1+0.25*ratiodynamic)*(1+0.25*ratiodynamic)*(1+0.25*ratiodynamic)*(1+0.25*ratiodynamic)*(1+0.25*ratiodynamic)*(1+0.25*ratiodynamic)-cash);
	 
	 
	return 0;
}
