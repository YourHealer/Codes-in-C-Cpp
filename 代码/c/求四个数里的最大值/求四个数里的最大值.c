#include <stdio.h>
#include <stdlib.h>
/*
	int find_bigger(int x,int y)
	{
	int max;
	max=(x>y?x:y);
	return(max);	
	} 
	
int main()                                                               没有采用函数嵌套，不过我觉得这样也已经很简单了...... 
{
    int num_1,num_2,num_3,num_4;
	printf("plz input four numbers that you want to use.\n");
	scanf("%d%d%d%d",&num_1,&num_2,&num_3,&num_4);
	int max,max_1,max_2;
	max_1=find_bigger(num_1,num_2);
	max_2=find_bigger(num_3,num_4);
	max=find_bigger(max_1,max_2);
	printf("Oops！The biggest one is %d.\n",max);
	return 0;
}
*/ 

int find_bigger(int x,int y)
	{
	int max;
	max=(x>y?x:y);
	return(max);	
	} 
	
int find_biggest(int a,int b,int c,int d)
{
int max;
max=find_bigger(a,b);
max=find_bigger(c,max);
max=find_bigger(d,max);
return(max);
	
}
                                                                                     /*用了函数嵌套喔，还不戳！*/ 
int main()
{
	int num_1,num_2,num_3,num_4;
	printf("plz input four numbers that you want to use.\n");
	scanf("%d%d%d%d",&num_1,&num_2,&num_3,&num_4);
	int max;
	max=find_biggest(num_1,num_2,num_3,num_4);
	printf("Oops！The biggest one is %d.\n",max);
	return 0;
}
















