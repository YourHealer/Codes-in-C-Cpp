#include<stdio.h>
int main(){
	char a,b,c;//接收变量
	int max=0,min=10000,res=0;//最小值、最大值、结果
	int flag=0;//标识变量
	
	//利用循环获取最大最小值，最后接收到的a变量为运算符
	while(scanf("%c%c",&a,&b)){
		if((a>='0')&&(a<='9')){
			if(max<a){
				max=a;
			}
			if(min>a){
				min=a;
			}
		}else break;
	}
	//将字符变量转化为整型变量
	max-=48;
	min-=48;
	
	//接收等号
	scanf("%c",&c);
	
	//对运算符进行分支判断
	if(a=='+'){
		res=max+min;
	}else if(a=='-'){
		res=max-min;
	}else if(a=='*'){
		res=max*min;
	}else if(a=='/'){
		//对除法中除数为0做特别处理，标识变量改变
		if(min==0){
			printf("Error!\n");
			flag=1;
		}else{
			res=max/min;	
		}
	}else if(a=='%'){
		res=max%min;
	}
	
	//根据标识变量对结果进行输出
	if(!flag){
		printf("%d%c%d%c%d\n",max,a,min,c,res);
	}
	
}
