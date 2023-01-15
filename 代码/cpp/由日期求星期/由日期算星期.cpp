#include <stdio.h>
#include <math.h>
int judgeYearDays(int year){
	if((year%400==0)||((year%4==0)&&(year%100!=0))){
		return 366;
	}else{
		return 365;
	}
}
int judgeMonthDays(int month,int year){
	if(judgeYearDays(year)==365){
		if(month==1){
			return 0;
		}else if(month==2){
			return 31;
		}else if(month==3){
			return 31+28;
		}else if(month==4){
			return 31+28+31;
		}else if(month==5){
			return 31+28+31+30;
		}else if(month==6){
			return 31+28+31+30+31;
		}else if(month==7){
			return 31+28+31+30+31+30;
		}else if(month==8){
			return 31+28+31+30+31+30+31;
		}else if(month==9){
			return 31+28+31+30+31+30+31+31;
		}else if(month==10){
			return 31+28+31+30+31+30+31+31+30;
		}else if(month==11){
			return 31+28+31+30+31+30+31+31+30+31;
		}else{
			return 31+28+31+30+31+30+31+31+30+31+30;
		}
	}else{
		if(month==1){
			return 0;
		}else if(month==2){
			return 31;
		}else if(month==3){
			return 31+29;
		}else if(month==4){
			return 31+29+31;
		}else if(month==5){
			return 31+29+31+30;
		}else if(month==6){
			return 31+29+31+30+31;
		}else if(month==7){
			return 31+29+31+30+31+30;
		}else if(month==8){
			return 31+29+31+30+31+30+31;
		}else if(month==9){
			return 31+29+31+30+31+30+31+31;
		}else if(month==10){
			return 31+29+31+30+31+30+31+31+30;
		}else if(month==11){
			return 31+29+31+30+31+30+31+31+30+31;
		}else{
			return 31+29+31+30+31+30+31+31+30+31+30;
		}
	}
}

int main(){
	int year,month,date;
	scanf("%d%d%d",&year,&month,&date);
	int days=0;
	int arr[14];
	arr[1]=31,arr[2]=judgeYearDays(year)-337,arr[3]=31,arr[4]=30,arr[5]=31,arr[6]=30,arr[7]=31,arr[8]=31,arr[9]=30,arr[10]=31,arr[11]=30,arr[12]=31;
	if((month>12)||(month<1)){
		printf("month is error.\n");
	}else if((date>arr[month])||(date<1)){
			printf("day is error.\n");
	}else{
		for(int i=1900;i<year;i++){
			days+=judgeYearDays(i);
		}
		days+=judgeMonthDays(month,year);
		days+=date;
		printf("%d\n",days%7);
	}
	return 0;
}
